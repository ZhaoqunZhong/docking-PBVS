#!/usr/bin/env python

import rospy
from smooth_curve_new import *
from trajectory_generation.srv import *
from std_msgs.msg import Float32MultiArray
from std_msgs.msg import Bool
import math

class curve_server:

	curve = []

	def __init__(self):
		self.curve_gen_server = rospy.Service('generate_curve', generateCurve, self.curGenSrvCbk)
		self.curve_follow_server = rospy.Service('follow_curve', followCurve, self.curFollowSrvCbk)

	def curGenSrvCbk(self, req):
		try:
			bounds = [-5, 5]
			start_pose = (req.start_vector[0], req.start_vector[1], req.start_vector[2])
			goal_pose = (req.end_vector[0], req.end_vector[1], req.end_vector[2])
			resolution = req.resolution
			self.curve = []
			angle_to_rotate = 0.0
			seg_num = 0
			self.curve, angle_to_rotate = smooth_curve_between_poses(start_pose, goal_pose, resolution)
			seg_num = len(self.curve)
			print("seg_num:", seg_num)
			rospy.loginfo("Generate curve service called, curve generated.")
			# =========================================================================
			# # Plot the solution
			# point_G = goal_pose[0:2]
			# point_A = (0.0, 0.0)
			# x0, y0, theta0 = goal_pose
			# # X-axis 
			# l0 = line_through_pose(start_pose)
			# #l0 = LinearCurve((0,0), bounds)
			# #l1 = line_from_point_slope((0,0), 1.0*y0/x0) #can't handle (0,0)--(0,1)
			# # line through goal_pose
			# l2 = line_through_pose(goal_pose)
			# fig = plt.figure()
			# ax = fig.add_subplot(1,1,1)
			# pose,z = zip(*self.curve)
			# x, y, theta = zip(*pose)
			# #ax.plot(actual_pose[0], actual_pose[1], marker = 'x', label = 'actual pose')
			# ax.plot(x, y,label = 'CURVE')
			# ax.plot(x, z,label = 'CURVATURE')
			# ax.plot(x, theta, label = 'orientation')
			# x = np.linspace(-3,3,100)
			# ax.plot(x, l0.y_at_x(x), 'black', label = 'x-axis')
			# ax.plot([0]*100, x, 'black', label = 'y-axis')
			# ax.plot(x, l0.y_at_x(x), 'orange', linestyle='dashed', label = 'line through start pose')
			# #ax.plot(x, l1.value_at(x), 'c', linestyle='dashed', label = 'line from origin to goal')
			# ax.plot(x, l2.y_at_x(x), 'orange', linestyle='dashed', label = 'line through goal pose')
			# ax.plot(x0, y0, marker = 'x', label = 'goal pose')
			# ax.plot(start_pose[0], start_pose[1], marker = 'x', label = 'start pose')
			# ax.set_xlim([-3, 3])
			# ax.set_ylim([-3, 3])
			# plt.grid(True)
			# plt.legend()
			# plt.show()
			return angle_to_rotate, seg_num

		except rospy.ServiceException, e:
			print "Cur gen Service call failed: %s"%e

	def curFollowSrvCbk(self, req):
		try:
			actual_pt = (req.current_pt[0], req.current_pt[1])
			print("actual_pt: ", actual_pt)
			min_dist, closest, index = closest_point(actual_pt, self.curve)
			return list(closest[0]), min_dist, closest[1], index, True
		except rospy.ServiceException, e:
			print "Cur follow Service call failed: %s"%e


def main(args):
	rospy.init_node('trajectory_service_server')
	cs = curve_server()
	try:
		rospy.spin()
	except rospy.ROSException, e:
		print "trajectory_service_server shut down because: %s"%e


if __name__ == '__main__':
	main(sys.argv)
