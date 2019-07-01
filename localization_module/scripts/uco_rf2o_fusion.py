#!/usr/bin/env python
#----------------------------------------------
# Use lidar odometry as information source when camera pose is not valid.
# When cam pose is invalid, save the last valid pose. From shis point on, add every lidar odometry increment onto the saved last valid pose, until new non-empty cam pose arrives.
# The incoming cam pose should be campared to the last valid pose. If their difference is larger than a thredshold, discard the incoming cam pose, and keep using lidar information, until incoming cam pose is considered valid by the thredshold.
# Here the cam and lidar pose means robot center pose got from cam and lidar localization.
#----------------------------------------------
import rospy
import tf
import tf.transformations as tft
import math
import std_msgs.msg 
import numpy

	
class pose_fuser:

	cam_jump_thred = 0.1
	base_link_lidar_id = "base_link_rf2o"
	odom_id = "odom_rf2o"
	base_link_cam_id = "base_link_uco"
	map_cam_id = "map_uco"
	cam_trigger_topic = "/uco_pose_valid_flag"
	base_link_final = "base_link_fused"
	
	def __init__(self):
		#subscribers
		self.cam_trigger_sub = rospy.Subscriber(self.cam_trigger_topic, std_msgs.msg.Int8, self.camTriggerCbk, queue_size =1)

		#tf
		self.tf_listener = tf.TransformListener()
		self.tf_broadcaster = tf.TransformBroadcaster()

		self.map_to_odom_init = False
		self.last_pose_init = False

	#This method publishes robust center pose
	def camTriggerCbk(self, data):
		if self.map_to_odom_init == False:
			self.initMapToOdomTf(data)
			return
		
		lidar_pose = self.computLidarPoseToMap()
		if data.data == 1: #cam pose not empty
			cam_pose = self.getCamPoseToMap()
			if self.last_pose_init == False:
				self.robust_last_pose = cam_pose
				self.robust_last_trans = self.robust_last_pose[0]
				self.lidar_last_pose = lidar_pose
				self.last_pose_init = True
				return
			else: #after first cam pose
				cam_cur_trans = cam_pose[0]
				cam_lastRobust_dis = math.sqrt(sum([(a - b)**2 for a, b in zip(cam_cur_trans, self.robust_last_pose[0])]))
				if cam_lastRobust_dis > self.cam_jump_thred: #cam pose jumped
					#get last valid pose and add current step lidar increment to it
					lidar_incre_mtrx = self.computPoseIncreMtrx(self.lidar_last_pose, lidar_pose)
					self.robust_center_pose = self.mulPoseByIncreMtrx(self.robust_last_pose, lidar_incre_mtrx)
					#print "Pose from cam jumped, used lidar odometry.<-------"
				else: #cam pose is valid
					self.robust_center_pose = cam_pose
					#print "---------> Using cam pose."
		else: #cam pose is empty
			if self.last_pose_init == False:
				return
			#get last valid pose and add current step lidar increment to it
			lidar_incre_mtrx = self.computPoseIncreMtrx(self.lidar_last_pose, lidar_pose)
			self.robust_center_pose = self.mulPoseByIncreMtrx(self.robust_last_pose, lidar_incre_mtrx)
			#print "Pose from cam lost, used lidar odometry.<-------"

		self.robust_last_pose = self.robust_center_pose
		self.lidar_last_pose = lidar_pose
		self.pubMapToCenterTf() #robust robot center pose


	def computLidarPoseToMap(self):
		odom_lidar_tf = self.tf_listener.lookupTransform(self.odom_id, self.base_link_lidar_id, rospy.Time())
		odom_lidar_mtrx = self.getMtrxFromTf(odom_lidar_tf)
		map_lidar_tf = self.mulPoseByIncreMtrx(self.map_odom_tf, odom_lidar_mtrx)
		return map_lidar_tf

	def getCamPoseToMap(self):
		map_cam_tf = self.tf_listener.lookupTransform(self.map_cam_id, self.base_link_cam_id, rospy.Time())
		return map_cam_tf

	def initMapToOdomTf(self, data): #Assume the first cam pose is valid, for now.
		if data.data == 1:
			self.map_odom_tf = self.tf_listener.lookupTransform(self.map_cam_id, self.base_link_cam_id, rospy.Time())
			self.map_to_odom_init = True

	def pubMapToCenterTf(self): 
		self.tf_broadcaster.sendTransform(self.robust_center_pose[0], self.robust_center_pose[1], rospy.Time.now(), self.base_link_final, self.map_cam_id)
		self.tf_broadcaster.sendTransform(self.map_odom_tf[0], self.map_odom_tf[1], rospy.Time.now(), self.odom_id, self.map_cam_id)

	def computPoseIncreMtrx(self, tf1, tf2):
		pose1_matrix = self.getMtrxFromTf(tf1)
		pose2_matrix = self.getMtrxFromTf(tf2)
		incre_matrix = numpy.dot(numpy.linalg.inv(pose1_matrix), pose2_matrix)
		return incre_matrix

	def mulPoseByIncreMtrx(self, tf, mtrx):
		pose_matrix = self.getMtrxFromTf(tf)
		new_pose_matrix = numpy.dot(pose_matrix, mtrx)
		return (tft.translation_from_matrix(new_pose_matrix), tft.unit_vector(tft.quaternion_from_matrix(new_pose_matrix)))

	def getMtrxFromTf(self, tf):
		pose_matrix = numpy.dot(tft.translation_matrix(tf[0]), tft.quaternion_matrix(tf[1])) #4x4 matrix
		return pose_matrix


if __name__ == '__main__':
	rospy.init_node('localization_module_node', anonymous=True)
	pf = pose_fuser()
	rospy.spin()


