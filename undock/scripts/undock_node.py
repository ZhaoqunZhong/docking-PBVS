#!/usr/bin/env python
import rospy
import tf
from geometry_msgs.msg import Twist
import math

# use ros coordinate system
class undock_executor:
	start_pt = (-0.1, 0)
	end_pt = (-3, 0)
	v_max = 0.5
	v_start = 0.2
	v_end = 0.2
	map_frame_id = "map_uco"
	base_frame_id = "base_link_fused"

	def __init__(self):
		self.tf_listener = tf.TransformListener()
		self.vel_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=1)
		self.total_dx = self.start_pt[0] - self.end_pt[0]
		print "self.total_dx: ", self.total_dx
		self.acc_finish_pt = self.start_pt[0] - self.total_dx/5
		self.dec_start_pt = self.end_pt[0] + self.total_dx/5
		self.vx = 0.0
		self.tf_listener.waitForTransform(self.map_frame_id, self.base_frame_id, rospy.Time(), rospy.Duration(10))

	def run(self):
		coords = self.getCurrentCoords()
		vx = self.alloSpdByCoord(coords)
		self.pubVelCmd(vx)

	def alloSpdByCoord(self, coords):
		if (coords[0] > self.acc_finish_pt):
			vx = (self.v_max - self.v_start)*math.sin( (self.start_pt[0] - coords[0])*math.pi/2 ) /(self.total_dx/5) + self.v_start
		elif (coords[0] <= self.acc_finish_pt and coords[0] >= self.dec_start_pt):
			vx = self.v_max
		else:
			vx = (self.v_max - self.v_end)*math.cos( (self.dec_start_pt[0] - coords[0])*math.pi/2 ) /(self.total_dx/5) + self.v_end
		vx = -vx
		
		if (coords[0] < self.end_pt[0]):
			vx = 0

		return vx

	def getCurrentCoords(self):
		t = self.tf_listener.getLatestCommonTime(self.map_frame_id, self.base_frame_id)
		cur_tf = self.tf_listener.lookupTransform(self.map_frame_id, self.base_frame_id, t)
		cur_coords = (cur_tf[0][0], cur_tf[0][1])
		return cur_coords

	def pubVelCmd(self, vx):
		vel = Twist()
		vel.linear.x = vx
		self.vel_pub.publish(vel)


if __name__ == '__main__':
	rospy.init_node('undock_node', anonymous=True)
	ue = undock_executor()

	rate = rospy.Rate(25)
	while not rospy.is_shutdown():
		ue.run()
		rate.sleep()