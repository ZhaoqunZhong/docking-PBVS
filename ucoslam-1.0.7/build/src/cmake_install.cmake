# Install script for directory: /home/zhaoqun/Documents/ucoslam-1.0.7/src

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucoslam.so.1.0.7"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucoslam.so.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucoslam.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES
    "/home/zhaoqun/Documents/ucoslam-1.0.7/build/libs/libucoslam.so.1.0.7"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/build/libs/libucoslam.so.1.0"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/build/libs/libucoslam.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucoslam.so.1.0.7"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucoslam.so.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucoslam.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/zhaoqun/Documents/ucoslam-1.0.7/build/libs:/opt/ros/kinetic/lib/x86_64-linux-gnu:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ucoslam" TYPE FILE FILES
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/ucoslam_exports.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/stereorectify.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/ucoslamtypes.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/imageparams.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/mapviewer.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/map.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/ucoslam.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ucoslam/map_types" TYPE FILE FILES
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/map_types/frame.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/map_types/marker.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/map_types/keyframedatabase.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/map_types/covisgraph.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/map_types/mappoint.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ucoslam/basictypes" TYPE FILE FILES
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/safemap.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/tsqueue.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/reusablecontainer.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/picoflann.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/se3.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/osadapter.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/hash.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/timers.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/minmaxbags.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/flag.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/sgl.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/debug.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/fastmat.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/se3transform.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/expansiblecontainer.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/heap.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/misc.h"
    "/home/zhaoqun/Documents/ucoslam-1.0.7/src/basictypes/io_utils.h"
    )
endif()

