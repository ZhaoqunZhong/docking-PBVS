#include "ucoslam/ucoslam.h"
#include "ucoslam/basictypes/debug.h"
#include "ucoslam/mapviewer.h"
#include "ucoslam/basictypes/timers.h"
#include "ucoslam/map.h"
#include "inputreader.h"
#include "ros/ros.h"
#include <tf/transform_broadcaster.h>
#include <tf/transform_listener.h>
#include <Eigen/Geometry>
#include "tf/transform_datatypes.h"
#include "std_msgs/Float64MultiArray.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Int8.h"
#include "../../include/my_math_utils.h"
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
//#include <ros/package.h>

class ucoslam_wrapper
{
public:
    ucoslam_wrapper()
    {
        std::string cam_cali_file, uco_params_file, uco_map_file;
        ros::NodeHandle node_priv("~"); //Create new nodehandle with "~" for getting params. "~" is for concatenating namespace.
        node_priv.param<int>("skip_pose_num", skip_pose_num_, 10);
        node_priv.param<std::string>("map_frame_id", map_frame_id_, "");
        node_priv.param<std::string>("base_link_id", base_link_id_, "");
        node_priv.param<std::string>("cam_uco_id", cam_link_id_, "");
        node_priv.param<std::string>("cam_cali_file", cam_cali_file, "");
        node_priv.param<std::string>("uco_params_file", uco_params_file, "");
        node_priv.param<std::string>("uco_map_file", uco_map_file, "");
        node_priv.param<int>("skip_poor_image_cnt", skip_poor_image_cnt_, 10);
        // nh_.param<double>(nh_name_+"/base_to_cam_dx", base_to_cam_dx_, 0);
        // nh_.param<double>(nh_name_+"/base_to_cam_dy", base_to_cam_dy_, 0);
        // nh_.param<double>(nh_name_+"/base_to_cam_dz", base_to_cam_dz_, 0);
        d435_color_sub_ = nh_.subscribe("/camera/color/image_raw", 1, &ucoslam_wrapper::colorImageCbk, this);
        pose_valid_pub_ = nh_.advertise<std_msgs::Int8>("uco_pose_valid_flag", 1);

        image_params_.readFromXMLFile(cam_cali_file);
        uco_params_.readFromYMLFile(uco_params_file);
        auto uco_map =std::make_shared<ucoslam::Map>();
        uco_map->readFromFile(uco_map_file);
        uco_slam_.setParams(uco_map, uco_params_);
        uco_slam_.setMode(ucoslam::MODE_LOCALIZATION);
        uco_slam_.resetTracker();

        //T_map_baselink = T_map_ucomap* T_ucomap_cam* inv(T_baselink_cam)
        while ( ros::ok() && !tf_ls_.frameExists(base_link_id_) )
        {
            //ros::spinOnce();
            ros::Duration(0.1).sleep();
        }
        // tf::StampedTransform T_baselink_cam;
        // tf_ls_.lookupTransform(base_link_id_, cam_link_id_, ros::Time(0), T_baselink_cam);
        // T_BC_.setOrigin( T_baselink_cam.getOrigin() );
        // T_BC_.setRotation( T_baselink_cam.getRotation() );
        while (ros::ok() && !tf_ls_.frameExists(cam_link_id_))
        {
            //ros::spinOnce();
            ros::Duration(0.1).sleep();
        }
        tf::StampedTransform T_B_Color_stamped;
        tf_ls_.lookupTransform(base_link_id_, cam_link_id_, ros::Time(0), T_B_Color_stamped);
        T_B_Color_.setOrigin( T_B_Color_stamped.getOrigin() );
        T_B_Color_.setRotation( T_B_Color_stamped.getRotation() );

    }

    void colorImageCbk(const sensor_msgs::ImageConstPtr& msg)
    {
    Fps_.start();
        static int cnt=0;
        if (cnt < skip_poor_image_cnt_)
        {
            cnt++;
            return;
        }

        cv_bridge::CvImagePtr cv_ptrRGB;
        cv_ptrRGB = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
        frame_cnt_++;
  
        M_CM_ = uco_slam_.process(cv_ptrRGB->image, image_params_, frame_cnt_); //50hz

        pubPoseValidFlag();
        pubBaselinkPos();
    Fps_.stop();  
    //cout << "Image " << frame_cnt_ << " fps=" << 1./Fps_.getAvrg()<< endl;
    }

    void pubBaselinkPos()
    {
        static tf::Transform T_mC;
        //static tf::Transform T_Mm;
        static tf::Transform T_MB;

        double qx, qy, qz, qw, tx, ty, tz;
        if (!M_CM_.empty()) //without this, causes the opencv error: (-215) type == CV_32F || type == CV_64F in function invert
        {

            cv::Mat M_mC = M_CM_.inv(); 
/*            Eigen::Matrix4f eM4;
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    eM4(i,j)= M_mC.at<double>(i,j);
            getQuatAndTransfromMatrix44(eM4, qx, qy, qz, qw, tx, ty, tz);*/
            getQuaternionAndTranslationfromMatrix44(M_mC, qx, qy, qz, qw, tx, ty, tz);
            T_mC.setOrigin( tf::Vector3(tx, ty, tz) );
            T_mC.setRotation( tf::Quaternion( qx, qy, qz, qw) );
/*            T_Mm.setOrigin( tf::Vector3(base_to_cam_dx_, base_to_cam_dy_, base_to_cam_dz_) );
            tf::Quaternion q_Mm;
            //q_Mm.setEuler(-M_PI/2, 0, -M_PI/2); //This api function is not correct.
            q_Mm.setRPY(-M_PI/2, 0, -M_PI/2);
            T_Mm.setRotation( q_Mm );*/
            T_MB = T_B_Color_*T_mC*(T_B_Color_.inverse());
            tf_br_.sendTransform(tf::StampedTransform(T_MB, ros::Time::now(), map_frame_id_, base_link_id_));
            //cout<<tx<<" "<<ty<<" "<<tz<<" "<<qx<<" "<<qy<<" "<<qz<<" "<<qw<<""<<endl;
        }
    }

    /*Since tf broadcast and lookup is not based on function callbacks like topic publish and subscribe,
    and frequency of the sense-plan-act cycle of the robot is based on the sense part actually, I published
    a trigger function here serving as a callback source of the new available "sense" information. 
    Eventually, the frequency of this function will control the frequency of the sense-plan-act cycle.*/
    void pubPoseValidFlag()
    {
        static std_msgs::Int8 t; 
        static int skip_pose_cnt = 0;

        if (!M_CM_.empty())
        {
            if (skip_pose_cnt == skip_pose_num_)
            {
                t.data = 1;
                pose_valid_pub_.publish(t);
            }
            else
            {
                skip_pose_cnt++;
                //cout << "skip_pose_cnt:" << skip_pose_cnt << endl;
                t.data = 0;
                pose_valid_pub_.publish(t);
            }
        }
        else
        {
            t.data = 0; //camPose_c2g is empty, should freeze the robot
            pose_valid_pub_.publish(t);
        }
    }

    void  getQuaternionAndTranslationfromMatrix44( cv::Mat &M_in ,double &qx,double &qy,double &qz,double &qw,double &tx,double &ty,double &tz)
    {
        //get the 3d part of matrix and get quaternion
        assert(M_in.total()==16);
        cv::Mat M;
        M_in.convertTo(M,CV_64F);
        cv::Mat r33=cv::Mat ( M,cv::Rect ( 0,0,3,3 ) );
        //use now eigen
        Eigen::Matrix3f e_r33;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                e_r33(i,j)=M.at<double>(i,j);

        //now, move to a angle axis
        Eigen::Quaternionf q(e_r33);
        qx=q.x();
        qy=q.y();
        qz=q.z();
        qw=q.w();


        tx=M.at<double>(0,3);
        ty=M.at<double>(1,3);
        tz=M.at<double>(2,3);
    }

    
private:
    ros::NodeHandle nh_;
    std::string nh_name_;
    ros::Subscriber d435_color_sub_;
    ros::Publisher pose_valid_pub_;
    tf::TransformBroadcaster tf_br_;
    tf::TransformListener tf_ls_; 
    //tf::Transform T_BC_;
    tf::Transform T_B_Color_;
    int skip_pose_num_;
    int skip_poor_image_cnt_=0;
    std::string map_frame_id_, base_link_id_, cam_link_id_;
    double base_to_cam_dx_, base_to_cam_dy_, base_to_cam_dz_;
    //std::bool undistort_;

    ucoslam::UcoSlam uco_slam_;
    ucoslam::ImageParams image_params_;
    ucoslam::Params uco_params_;
    cv::Mat M_CM_;
    int frame_cnt_=0;

    TimerAvrg Fps_;
};

int main(int argc,char **argv)
{
    //Initiate ROS
    ros::init(argc, argv, "ucoslam_wrapper_node");
    //Create an object of class that will take care of everything
    ucoslam_wrapper UWobject;

    ros::spin();
    return 0;
}
