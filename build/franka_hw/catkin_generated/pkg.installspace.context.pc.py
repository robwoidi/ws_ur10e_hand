# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/opt/ros/noetic/include/libfranka".split(';') if "${prefix}/include;/opt/ros/noetic/include/libfranka" != "" else []
PROJECT_CATKIN_DEPENDS = "actionlib_msgs;actionlib;controller_interface;combined_robot_hw;hardware_interface;joint_limits_interface;roscpp;std_srvs;pluginlib;urdf;franka_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lfranka_hw;-lfranka_control_services;/opt/ros/noetic/lib/libfranka.so.0.8.0".split(';') if "-lfranka_hw;-lfranka_control_services;/opt/ros/noetic/lib/libfranka.so.0.8.0" != "" else []
PROJECT_NAME = "franka_hw"
PROJECT_SPACE_DIR = "/home/woidi/ws_ur10e_hand/install"
PROJECT_VERSION = "0.8.0"
