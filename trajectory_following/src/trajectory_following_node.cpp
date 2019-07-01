#include "ros/ros.h"
#include <ros/time.h>
#include "std_msgs/Float32MultiArray.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Int8.h"
#include "std_msgs/Bool.h"
#include <geometry_msgs/Twist.h>
#include <tf/transform_listener.h>
#include "trajectory_generation/followCurve.h"
#include "trajectory_generation/generateCurve.h"
#include "../../include/my_math_utils.h"

//-------------> Use trajectory generation srv coordinate system, for convenience. <-------------

class SpdController
{
public:
	SpdController()
	{
		//Load params
		ros::NodeHandle node_priv("~"); //Create new nodehandle with "~" for getting params. "~" is for concatenating namespace.
		node_priv.param<double>("agl_spd_limit", agl_spd_limit_, 1.0);
		node_priv.param<double>("axial_spd_limit", axial_spd_limit_, 1.0);
		node_priv.param<double>("docking_end_y", docking_end_y_, 0.24);
		node_priv.param<double>("angluar_speed", angluar_speed_, 0.2);
		node_priv.param<double>("max_line_speed", max_line_speed_, 0.5);
		node_priv.param<double>("line_follow_thred", lineFl_thre_, 0.02);
		node_priv.param<double>("angle_rotate_thred", aglRotate_thre_, 0.02);
		
		spdCtrl_pub_ = n_.advertise<geometry_msgs::Twist>("/cmd_vel", 1);
		lineSetpoint_pub_ = n_.advertise<std_msgs::Float64>("/line_setpt", 1);
		angleSetpoint_pub_ = n_.advertise<std_msgs::Float64>("/angle_setpt", 1);
		dErr_pub_ = n_.advertise<std_msgs::Float64>("/line_err", 1);
		aErr_pub_ = n_.advertise<std_msgs::Float64>("/agl_err", 1);
		pid_enable_pub_ = n_.advertise<std_msgs::Bool>("/enable_pid", 1);

		lineCtlEft_sub_ = n_.subscribe("/position_pid/control_effort", 1, &SpdController::linePidCbk, this);
		aglCtlEft_sub_ = n_.subscribe("/angle_pid/control_effort", 1, &SpdController::aglPidCbk, this);
		tf_trigger_sub_ = n_.subscribe("/uco_pose_valid_flag", 1, &SpdController::tfTriggerCbk, this);

		genCurveClient_ = n_.serviceClient<trajectory_generation::generateCurve>("generate_curve");
		followCurveClient_ = n_.serviceClient<trajectory_generation::followCurve>("follow_curve");
		
		//wait for robust center pose to be available
		while ( ros::ok() && !centerPos_tf_ls_.frameExists("/base_link_fused") )
		{
			ros::Duration(0.01).sleep();
		}

		while (ros::ok() && trigger_cbk_started_ == false) //ensure docking_init_vec_ is properly initialized
		{
			ros::spinOnce(); 
			ros::Duration(0.01).sleep();
		}

		initDocking();

		while (ros::ok())
		{
			if (dock_srv_on_ == true)
			{
				if (step_count_ == 1)
				{
					rotateAngle(docking_init_vec_[2] + dock_angleToRotate_, angluar_speed_);
				}
				if (step_count_ == 2)
				{
					ROS_INFO("Pause for 2 seconds.");
					sendZeroSpdAndStopPid();
					ros::Duration(1).sleep();
					step_count_++;
				}
				if (step_count_ == 3)
				{
					//followCurve(max_line_speed_/2, max_line_speed_, 0);
					followLine({0, docking_init_vec_[1]}, {0, docking_end_y_}, max_line_speed_/2, max_line_speed_, 0);
				}
				if (step_count_ == 4)
				{
					dock_srv_on_ = false;
					ROS_INFO("Docking srv finished.");
				}
			}
			else
			{
				sendZeroSpdAndStopPid();
			}
			
			ros::spinOnce();
    		// Add a small sleep to avoid 100% CPU usage
			ros::Duration(0.025).sleep(); //velocity cmd frequency
		}
	}

	void initDocking()
	{
		docking_init_vec_[0] = mpCenterPos_["tx"];
		docking_init_vec_[1] = mpCenterPos_["ty"];
		docking_init_vec_[2] = mpCenterPos_["theta"];

		dock_srv_on_ = true;
		step_count_ = 0;

		genCSrv_.request.start_vector = {(float)docking_init_vec_[0], (float)docking_init_vec_[1], (float)docking_init_vec_[2]};
		genCSrv_.request.end_vector = {0, (float)docking_end_y_, (float)M_PI/2};
		if (genCSrv_.request.end_vector[2] > genCSrv_.request.start_vector[2])
			cur_direction_ = LEFT;
		else if (genCSrv_.request.end_vector[2] < genCSrv_.request.start_vector[2])
			cur_direction_ = RIGHT;
		else
			cur_direction_ = NA;
		genCSrv_.request.resolution = gen_cur_resolution_;
		genCurveClient_.call(genCSrv_);

		dock_angleToRotate_ = genCSrv_.response.angle_to_rotate;
		total_seg_num_ = genCSrv_.response.seg_num;

		step_count_++; //angle rotate step
		ROS_INFO("Docking initialized.");
	}

	void tfTriggerCbk(const std_msgs::Int8 &msg) 
	{
		tf::StampedTransform transform;
		centerPos_tf_ls_.lookupTransform("map_uco", "base_link_fused", ros::Time(0), transform);
		tf::Vector3 translation = transform.getOrigin();
		tf::Quaternion rotation = transform.getRotation();
		double roll, pitch, yaw;
		tf::Matrix3x3(rotation).getRPY(roll, pitch, yaw);
		double tx, ty, tz;
		tx = translation.getX();
		ty = translation.getY();
		tz = translation.getZ();


		mpCenterPos_.clear();
		mpCenterPos_.insert(pair<string, double>("tx", -ty));
		mpCenterPos_.insert(pair<string, double>("ty", tx));
		mpCenterPos_.insert(pair<string, double>("theta", yaw+M_PI/2));


		trigger_cbk_started_ = true;
	}

	void followLine(vector<double> start_pt, vector<double> end_pt, double v_start, double v_max, double v_end)
	{
		enablePid();

		if ( euclideanDistance(vector<double>{mpCenterPos_["tx"], mpCenterPos_["ty"]}, end_pt) < lineFl_thre_ )
		{
			ROS_INFO("Finished line following.");
			sendZeroSpdAndStopPid();
			step_count_++;
			return;
		}
		//Speed allocation
		static double total_dy = end_pt[1] - start_pt[1];
		static double acc_finish_pt = start_pt[1] + total_dy/5;
		static double dec_start_pt = end_pt[1] - total_dy/5;
		double vy;
		if (mpCenterPos_["ty"] < acc_finish_pt)
		{
			vy = (v_max - v_start)*sin( ((mpCenterPos_["ty"] - start_pt[1])*M_PI/2)/(total_dy/5) ) + v_start;

		}
		else if (mpCenterPos_["ty"] >= acc_finish_pt && mpCenterPos_["ty"] <= dec_start_pt)
		{
			vy = v_max;
		}
		else
		{
			vy = (v_max - v_end)*cos( (mpCenterPos_["ty"] - dec_start_pt)*(M_PI/2)/(total_dy/5) ) + v_end;
		}
		if (vy < 0)
			ROS_INFO("Missed the end_pt on the finishing line.");
			
		line_err_.data = mpCenterPos_["tx"];
		double line_angle = M_PI/2;
		agl_err_.data = line_angle - mpCenterPos_["theta"]; 
		dErr_pub_.publish(line_err_);
		aErr_pub_.publish(agl_err_);

		//get pid control efforts and publish vel_cmd
		geometry_msgs::Twist v;
		v.linear.x = confineValue(vy, 0, axial_spd_limit_);
		v.linear.y = 0; 
		v.linear.z = 0; 
		v.angular.x = 0; 
		v.angular.y = 0;
		double angluar_speed = -linePidCtlEft_ - aglPidCtlEft_; 
		v.angular.z = confineValue(angluar_speed, -agl_spd_limit_, agl_spd_limit_);
		spdCtrl_pub_.publish(v);
	}
	

	void linePidCbk(const std_msgs::Float64 &msg)
	{
		linePidCtlEft_ = msg.data; 
	}
	void aglPidCbk(const std_msgs::Float64 &msg)
	{
		aglPidCtlEft_ = msg.data;
	}
	

	void rotateAngle(double obj_angle, double speed)
	{

		double cur_angle = mpCenterPos_["theta"]; 

		geometry_msgs::Twist v;
		if (fabs(cur_angle - obj_angle) > aglRotate_thre_)
		{
			if (cur_angle > obj_angle)
				v.angular.z = -speed;
			else
				v.angular.z = speed;
		}
		else
		{
			sendZeroSpdAndStopPid();
			step_count_++;
			cout << "step_count_: " << step_count_ << endl; 
			ROS_INFO("rotateAngle function finished.");
			return;
		}
		v.linear.x = 0;
		v.linear.y = 0; 
		v.linear.z = 0; 
		v.angular.x = 0; 
		v.angular.y = 0;
		v.angular.z = confineValue(v.angular.z, -agl_spd_limit_, agl_spd_limit_);
		spdCtrl_pub_.publish(v);
	}


	void sendZeroSpdAndStopPid()
	{
		geometry_msgs::Twist v;
		v.linear.x = 0;
		v.linear.y = 0;
		v.linear.z = 0;
		v.angular.x = 0;
		v.angular.y = 0;
		v.angular.z = 0;
		spdCtrl_pub_.publish(v);

		bPid_enabled_.data = false;
		pid_enable_pub_.publish(bPid_enabled_);
	}

	void enablePid()
	{
		if (bPid_enabled_.data == false)
		{
			bPid_enabled_.data = true; 
			pid_enable_pub_.publish(bPid_enabled_);
			//ROS_INFO("PID enabled.");
			std_msgs::Float64 lineErr_setpt;
			std_msgs::Float64 angleErr_setpt;
			lineErr_setpt.data = 0;
			angleErr_setpt.data = 0;
			lineSetpoint_pub_.publish(lineErr_setpt);
			angleSetpoint_pub_.publish(angleErr_setpt);
		}
	}


private:
	ros::NodeHandle n_; 

	ros::Publisher spdCtrl_pub_;
	ros::Publisher lineSetpoint_pub_;
	ros::Publisher angleSetpoint_pub_;
	ros::Publisher dErr_pub_;
	ros::Publisher aErr_pub_;
	ros::Publisher pid_enable_pub_;

	ros::Subscriber lineCtlEft_sub_;
	ros::Subscriber aglCtlEft_sub_;
	ros::Subscriber tf_trigger_sub_;

	trajectory_generation::generateCurve genCSrv_;
	trajectory_generation::followCurve followCSrv_;
	ros::ServiceClient genCurveClient_;
	ros::ServiceClient followCurveClient_;

	tf::TransformListener centerPos_tf_ls_;

	std_msgs::Bool bPid_enabled_;
	std_msgs::Float64 line_err_;
	std_msgs::Float64 agl_err_;

	map<string, double> mpCenterPos_;
	vector<double> docking_init_vec_{0,0,0};
	enum curvature_direction {LEFT, RIGHT, NA} cur_direction_;

	double linePidCtlEft_;
	double aglPidCtlEft_;
	double agl_spd_limit_;
	double axial_spd_limit_;
	double lineFl_thre_;
	double aglRotate_thre_;
	double angluar_speed_;
	double max_line_speed_;
	double dock_angleToRotate_;
	double docking_end_y_;

	bool dock_srv_on_ = false;
	bool trigger_cbk_started_ = false;

	int step_count_ = 0;
	int gen_cur_resolution_ = 1000;
	int total_seg_num_;

	TimerAvrg Fps_;

};

int main(int argc, char **argv)
{
  	//Initiate ROS
	ros::init(argc, argv, "trajectory_following_node");
  	//Create an object of class SpdController that will take care of everything
	SpdController SCobject;

	ros::spin();

	return 0;
}






