# Install script for directory: /home/zhaoqun/Documents/ucoslam-1.0.7

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ucoslam" TYPE FILE FILES "/home/zhaoqun/Documents/ucoslam-1.0.7/build/ucoslamConfig.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/3rdparty/xflann/xflann/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/3rdparty/g2o/g2o/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/3rdparty/fbow/fbow/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/3rdparty/aruco/aruco/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/src/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/utils/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/zhaoqun/Documents/ucoslam-1.0.7/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
