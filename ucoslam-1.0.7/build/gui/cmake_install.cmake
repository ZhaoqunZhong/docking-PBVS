# Install script for directory: /home/zhaoqun/Documents/ucoslam-1.0.7/gui

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/UcoSLAM_GUI" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/UcoSLAM_GUI")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/UcoSLAM_GUI"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/UcoSLAM_GUI")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/UcoSLAM_GUI" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/UcoSLAM_GUI")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/UcoSLAM_GUI"
         OLD_RPATH "/home/zhaoqun/Documents/ucoslam-1.0.7/build/libs:/opt/ros/kinetic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/UcoSLAM_GUI")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ucoslam" TYPE FILE FILES "/home/zhaoqun/Documents/ucoslam-1.0.7/3rdparty/vocabularies/orb.fbow")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/tools/gparam/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/tools/moduletools/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/tools/qtgl/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/modulecalibration/cmake_install.cmake")
  include("/home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/mappingmodule/cmake_install.cmake")

endif()

