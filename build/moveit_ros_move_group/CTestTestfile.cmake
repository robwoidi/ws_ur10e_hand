# CMake generated Testfile for 
# Source directory: /home/woidi/ws_ur10e_hand/src/moveit/moveit_ros/move_group
# Build directory: /home/woidi/ws_ur10e_hand/build/moveit_ros_move_group
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_moveit_ros_move_group_rostest_test_test_check_state_validity_in_empty_scene.test "/home/woidi/ws_ur10e_hand/build/moveit_ros_move_group/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/woidi/ws_ur10e_hand/build/moveit_ros_move_group/test_results/moveit_ros_move_group/rostest-test_test_check_state_validity_in_empty_scene.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/woidi/ws_ur10e_hand/src/moveit/moveit_ros/move_group --package=moveit_ros_move_group --results-filename test_test_check_state_validity_in_empty_scene.xml --results-base-dir \"/home/woidi/ws_ur10e_hand/build/moveit_ros_move_group/test_results\" /home/woidi/ws_ur10e_hand/src/moveit/moveit_ros/move_group/test/test_check_state_validity_in_empty_scene.test ")
set_tests_properties(_ctest_moveit_ros_move_group_rostest_test_test_check_state_validity_in_empty_scene.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/woidi/ws_ur10e_hand/src/moveit/moveit_ros/move_group/CMakeLists.txt;100;add_rostest;/home/woidi/ws_ur10e_hand/src/moveit/moveit_ros/move_group/CMakeLists.txt;0;")
subdirs("gtest")
