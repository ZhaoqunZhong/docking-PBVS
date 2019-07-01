#ifndef MY_UTILS_H
#define MY_UTILS_H

#include <math.h>
#include <vector>
#include <chrono>
#include <Eigen/Geometry>
#include "tf/transform_datatypes.h"

#define M_PI 3.14159265358979323846  /* pi */
#define D_TO_R 0.017453293 //degree to rad
#define zero_div_factor pow(10,10)
using namespace std;

double euclideanDistance(vector<double> pta, vector<double> ptb)
{
	double dx = pta[0] - ptb[0];
	double dy = pta[1] - ptb[1];
	double dis = pow(dx,2) + pow(dy,2);
	dis = sqrt(dis);

	return dis;
}

// dis = vector_AC x vector_AB / dis_AB
// When C is on RHS of line_AB, dis > 0
double pointToLineDistance(vector<double> ptc, vector<double> line_pta, vector<double> line_ptb)
{
	vector<double> v_ac{0,0};
	vector<double> v_ab{0,0};
	v_ac[0] = ptc[0] - line_pta[0];
	v_ac[1] = ptc[1] - line_pta[1];
	v_ab[0] = line_ptb[0] - line_pta[0];
	v_ab[1] = line_ptb[1] - line_pta[1];
	double cross_product = v_ab[0]*v_ac[1] - v_ab[1]*v_ac[0];
	double dis = cross_product/euclideanDistance(line_pta, line_ptb);
	return -dis;
}

//angle between vector_AB and vector_AC
//When C is on RHS of line_AB, angle < 0
double angleBetweenVectors(vector<double> ptc, vector<double> line_pta, vector<double> line_ptb)
{
	vector<double> v_ac{0,0};
	vector<double> v_ab{0,0};
	v_ac[0] = ptc[0] - line_pta[0];
	v_ac[1] = ptc[1] - line_pta[1];
	v_ab[0] = line_ptb[0] - line_pta[0];
	v_ab[1] = line_ptb[1] - line_pta[1];
	double cross_product = v_ab[0]*v_ac[1] - v_ab[1]*v_ac[0];
	double length_ac = euclideanDistance(line_pta, ptc);
	double length_ab = euclideanDistance(line_pta, line_ptb);
	double sin_theta = (cross_product*zero_div_factor)/(length_ab*length_ac*zero_div_factor);
	double theta = asin(sin_theta);
	return theta;
}

double confinedAngle(double angle_in, double lower_bound = 0, double upper_bound = M_PI)
{
	while (angle_in < lower_bound)
		angle_in += M_PI;
	while (angle_in > upper_bound)
		angle_in -= M_PI;
	return angle_in;
}

double confineValue(double value_in, double lower_bound, double upper_bound)
{
	if (value_in > upper_bound)
		value_in = upper_bound;
	if (value_in < lower_bound)
		value_in = lower_bound;
	return value_in;
}

struct TimerAvrg{
    std::vector<double> times;
    size_t curr=0,n;
    std::chrono::high_resolution_clock::time_point begin,end;

    TimerAvrg(int _n=30)
    {
        n=_n;
        times.reserve(n);
    }
    inline void start(){
        begin= std::chrono::high_resolution_clock::now();

    }

    inline void stop(){
        end= std::chrono::high_resolution_clock::now();

        double duration=double(std::chrono::duration_cast<std::chrono::microseconds>(end-begin).count())*1e-6;
        if ( times.size()<n) times.push_back(duration);
        else{
            times[curr]=duration;
            curr++;
            if (curr>=times.size()) curr=0;
        }
    }

    void reset(){
        times.clear();
        curr=0;
    }
//returns time in seconds
   inline double getAvrg(){
        double sum=0;
        for(auto t:times) sum+=t;
        return sum/double(times.size());
    }
};

void  getQuatAndTransfromMatrix44( Eigen::Matrix4f &M_in ,double &qx,double &qy,double &qz,double &qw,double &tx,double &ty,double &tz)
{
/*    //get the 3d part of matrix and get quaternion
    assert(M_in.total()==16);
    cv::Mat M;
    M_in.convertTo(M,CV_64F);
    cv::Mat r33=cv::Mat ( M,cv::Rect ( 0,0,3,3 ) );*/


    //use now eigen
    Eigen::Matrix3f e_r33;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            e_r33(i,j)= M_in(i,j);

    //now, move to a angle axis
    Eigen::Quaternionf q(e_r33);
    qx=q.x();
    qy=q.y();
    qz=q.z();
    qw=q.w();


    tx= M_in(0,3);
    ty= M_in(1,3);
    tz= M_in(2,3);
}

Eigen::Quaternionf getQuatFromEular(double yaw, double pitch, double roll)
{
    Eigen::Quaternionf q;
    q = Eigen::AngleAxisf(roll, Eigen::Vector3f::UnitX())
    * Eigen::AngleAxisf(pitch, Eigen::Vector3f::UnitY())
    * Eigen::AngleAxisf(yaw, Eigen::Vector3f::UnitZ());
    return q;
}


#endif