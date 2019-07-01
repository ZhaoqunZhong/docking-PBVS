#!/usr/bin/env python

import rospy
import roslaunch
import rospkg
from docking_server.srv import *

class docking_service_server:

	def __init__(self):
		self.rospack = rospkg.RosPack()
		self.uuid = roslaunch.rlutil.get_or_generate_uuid(None, False)
		self.dock_server = rospy.Service('dock', dock, self.dockSrvCbk)
		self.shutdown_server = rospy.Service('shutdown', shutdown, self.shutdownSrvCbk)
		self.undock_server = rospy.Service('undock', undock, self.unDockSrvCbk)
		self.dock_called = False
		self.shutdown_called = False
		self.unDock_called = False
		self.lch_handles_inited = False
		self.undock_handles_inited = False

	def init_lch_handles(self):
		#self.cam_loc_launch = roslaunch.parent.ROSLaunchParent(self.uuid, [self.rospack.get_path('ucoslam_wrapper')+"/launch/ucoslam_wrapper.launch"])
		#self.lidar_loc_launch = roslaunch.parent.ROSLaunchParent(self.uuid, [self.rospack.get_path('rf2o_laser_odometry')+"/launch/rf2o_laser_odometry.launch"])
		self.loc_module_launch = roslaunch.parent.ROSLaunchParent(self.uuid, [self.rospack.get_path('localization_module')+"/launch/localization_module.launch"])
		self.tra_gen_launch = roslaunch.parent.ROSLaunchParent(self.uuid, [self.rospack.get_path('trajectory_generation')+"/launch/trajectory_server.launch"])
		self.tra_fl_launch = roslaunch.parent.ROSLaunchParent(self.uuid, [self.rospack.get_path('trajectory_following')+"/launch/trajectory_following.launch"])
		self.lch_handles_inited = True

	def dockSrvCbk(self, req):
		self.dock_called = True
		return True

	def shutdownSrvCbk(self, req):
		self.shutdown_called = True
		return True

	def unDockSrvCbk(self, req):
		self.unDock_called = True
		return True

	def init_undock_handles(self):
		self.loc_module_launch = roslaunch.parent.ROSLaunchParent(self.uuid, [self.rospack.get_path('localization_module')+"/launch/localization_module.launch"])
		self.undock_launch = roslaunch.parent.ROSLaunchParent(self.uuid, [self.rospack.get_path('undock')+"/launch/undock.launch"])
		self.undock_handles_inited = True


if __name__ == '__main__':
	rospy.init_node('docking_server_node', anonymous=True)
	ds = docking_service_server()

	
	while not rospy.is_shutdown():
		if ds.dock_called == True:
			ds.dock_called = False
			if ds.lch_handles_inited == False:
				ds.init_lch_handles()
				#ds.cam_loc_launch.start()
				#ds.lidar_loc_launch.start()
				ds.loc_module_launch.start()
				ds.tra_gen_launch.start()
				ds.tra_fl_launch.start()
				
		if ds.shutdown_called == True:
			ds.shutdown_called = False
			if ds.lch_handles_inited == True:
				#ds.cam_loc_launch.shutdown()
				#ds.lidar_loc_launch.shutdown()
				ds.loc_module_launch.shutdown()
				ds.tra_gen_launch.shutdown()
				ds.tra_fl_launch.shutdown()
				ds.lch_handles_inited = False
			if ds.undock_handles_inited == True:
				ds.loc_module_launch.shutdown()
				ds.undock_launch.shutdown()
				ds.undock_handles_inited = False

		if ds.unDock_called == True:
			ds.unDock_called = False
			if ds.undock_handles_inited == False:
				ds.init_undock_handles()
				ds.loc_module_launch.start()
				ds.undock_launch.start()

		rospy.sleep(1)



