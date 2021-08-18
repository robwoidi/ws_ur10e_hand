# Install script for directory: /home/woidi/ws_ur10e_hand/src/moveit/moveit_ros/planning

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/woidi/ws_ur10e_hand/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/woidi/ws_ur10e_hand/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/woidi/ws_ur10e_hand/install" TYPE PROGRAM FILES "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/woidi/ws_ur10e_hand/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/woidi/ws_ur10e_hand/install" TYPE PROGRAM FILES "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/woidi/ws_ur10e_hand/install/setup.bash;/home/woidi/ws_ur10e_hand/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/woidi/ws_ur10e_hand/install" TYPE FILE FILES
    "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/setup.bash"
    "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/woidi/ws_ur10e_hand/install/setup.sh;/home/woidi/ws_ur10e_hand/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/woidi/ws_ur10e_hand/install" TYPE FILE FILES
    "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/setup.sh"
    "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/woidi/ws_ur10e_hand/install/setup.zsh;/home/woidi/ws_ur10e_hand/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/woidi/ws_ur10e_hand/install" TYPE FILE FILES
    "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/setup.zsh"
    "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/woidi/ws_ur10e_hand/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/woidi/ws_ur10e_hand/install" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/devel/.private/moveit_ros_planning/include/moveit_ros_planning/PlanningSceneMonitorDynamicReconfigureConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/devel/.private/moveit_ros_planning/include/moveit_ros_planning/TrajectoryExecutionDynamicReconfigureConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/devel/.private/moveit_ros_planning/include/moveit_ros_planning/PlanExecutionDynamicReconfigureConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/devel/.private/moveit_ros_planning/include/moveit_ros_planning/SenseForPlanDynamicReconfigureConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/devel/.private/moveit_ros_planning/lib/python3/dist-packages/moveit_ros_planning/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/woidi/ws_ur10e_hand/devel/.private/moveit_ros_planning/lib/python3/dist-packages/moveit_ros_planning/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning" TYPE DIRECTORY FILES "/home/woidi/ws_ur10e_hand/devel/.private/moveit_ros_planning/lib/python3/dist-packages/moveit_ros_planning/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/moveit_ros_planning.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning/cmake" TYPE FILE FILES
    "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/moveit_ros_planningConfig.cmake"
    "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/catkin_generated/installspace/moveit_ros_planningConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/src/moveit/moveit_ros/planning/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning" TYPE FILE FILES "/home/woidi/ws_ur10e_hand/src/moveit/moveit_ros/planning/planning_request_adapters_plugin_description.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/gtest/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/rdf_loader/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/collision_plugin_loader/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/kinematics_plugin_loader/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/robot_model_loader/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/constraint_sampler_manager_loader/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/planning_pipeline/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/planning_request_adapter_plugins/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/planning_scene_monitor/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/planning_components_tools/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/trajectory_execution_manager/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/plan_execution/cmake_install.cmake")
  include("/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/moveit_cpp/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/woidi/ws_ur10e_hand/build/moveit_ros_planning/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
