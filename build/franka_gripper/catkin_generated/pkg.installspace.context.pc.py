# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/opt/ros/noetic/include/libfranka".split(';') if "${prefix}/include;/opt/ros/noetic/include/libfranka" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;message_runtime;control_msgs;actionlib;sensor_msgs;xmlrpcpp;actionlib_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lfranka_gripper;/opt/ros/noetic/lib/libfranka.so.0.8.0".split(';') if "-lfranka_gripper;/opt/ros/noetic/lib/libfranka.so.0.8.0" != "" else []
PROJECT_NAME = "franka_gripper"
PROJECT_SPACE_DIR = "/home/woidi/ws_ur10e_hand/install"
PROJECT_VERSION = "0.8.0"
