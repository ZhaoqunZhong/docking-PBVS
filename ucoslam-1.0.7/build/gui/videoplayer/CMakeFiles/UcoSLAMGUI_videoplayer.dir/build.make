# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zhaoqun/Documents/ucoslam-1.0.7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhaoqun/Documents/ucoslam-1.0.7/build

# Include any dependencies generated for this target.
include gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/depend.make

# Include the progress variables for this target.
include gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/progress.make

# Include the compile flags for this target's objects.
include gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/flags.make

gui/videoplayer/ui_cameracontrols.h: ../gui/videoplayer/cameracontrols.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zhaoqun/Documents/ucoslam-1.0.7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_cameracontrols.h"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer/ui_cameracontrols.h /home/zhaoqun/Documents/ucoslam-1.0.7/gui/videoplayer/cameracontrols.ui

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/flags.make
gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o: ../gui/videoplayer/videoplayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhaoqun/Documents/ucoslam-1.0.7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o -c /home/zhaoqun/Documents/ucoslam-1.0.7/gui/videoplayer/videoplayer.cpp

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.i"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhaoqun/Documents/ucoslam-1.0.7/gui/videoplayer/videoplayer.cpp > CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.i

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.s"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhaoqun/Documents/ucoslam-1.0.7/gui/videoplayer/videoplayer.cpp -o CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.s

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o.requires:

.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o.requires

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o.provides: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o.requires
	$(MAKE) -f gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/build.make gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o.provides.build
.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o.provides

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o.provides.build: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o


gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/flags.make
gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o: ../gui/videoplayer/cameracontrols.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhaoqun/Documents/ucoslam-1.0.7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o -c /home/zhaoqun/Documents/ucoslam-1.0.7/gui/videoplayer/cameracontrols.cpp

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.i"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhaoqun/Documents/ucoslam-1.0.7/gui/videoplayer/cameracontrols.cpp > CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.i

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.s"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhaoqun/Documents/ucoslam-1.0.7/gui/videoplayer/cameracontrols.cpp -o CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.s

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o.requires:

.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o.requires

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o.provides: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o.requires
	$(MAKE) -f gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/build.make gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o.provides.build
.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o.provides

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o.provides.build: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o


gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/flags.make
gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o: gui/videoplayer/UcoSLAMGUI_videoplayer_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhaoqun/Documents/ucoslam-1.0.7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o -c /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer/UcoSLAMGUI_videoplayer_automoc.cpp

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.i"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer/UcoSLAMGUI_videoplayer_automoc.cpp > CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.i

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.s"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer/UcoSLAMGUI_videoplayer_automoc.cpp -o CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.s

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o.requires:

.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o.requires

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o.provides: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o.requires
	$(MAKE) -f gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/build.make gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o.provides.build
.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o.provides

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o.provides.build: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o


# Object files for target UcoSLAMGUI_videoplayer
UcoSLAMGUI_videoplayer_OBJECTS = \
"CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o" \
"CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o" \
"CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o"

# External object files for target UcoSLAMGUI_videoplayer
UcoSLAMGUI_videoplayer_EXTERNAL_OBJECTS =

libs/libUcoSLAMGUI_videoplayer.so.1.0.7: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/build.make
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: libs/libucoslam_fbow.so.1.0.7
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: libs/libucoslam_aruco.so.1.0.7
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: libs/libucoslam_xflann.so.1.0.7
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: libs/libucoslam_g2o_core.so.1.0.7
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: libs/libUcoSLAMGUI_gparam.so.1.0.7
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_stitching3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_superres3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_videostab3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_aruco3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_bgsegm3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_bioinspired3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ccalib3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_cvv3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_dpm3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_face3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_photo3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_fuzzy3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_hdf3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_img_hash3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_line_descriptor3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_optflow3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_reg3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_rgbd3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_saliency3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_stereo3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_structured_light3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_viz3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_phase_unwrapping3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_surface_matching3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_tracking3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_datasets3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_plot3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_text3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_dnn3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xfeatures2d3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ml3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_shape3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_video3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ximgproc3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_calib3d3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_features2d3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_flann3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_highgui3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_videoio3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xobjdetect3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_objdetect3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xphoto3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: libs/libucoslam_g2o_stuff.so.1.0.7
libs/libUcoSLAMGUI_videoplayer.so.1.0.7: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhaoqun/Documents/ucoslam-1.0.7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../../libs/libUcoSLAMGUI_videoplayer.so"
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UcoSLAMGUI_videoplayer.dir/link.txt --verbose=$(VERBOSE)
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && $(CMAKE_COMMAND) -E cmake_symlink_library ../../libs/libUcoSLAMGUI_videoplayer.so.1.0.7 ../../libs/libUcoSLAMGUI_videoplayer.so.1.0 ../../libs/libUcoSLAMGUI_videoplayer.so

libs/libUcoSLAMGUI_videoplayer.so.1.0: libs/libUcoSLAMGUI_videoplayer.so.1.0.7
	@$(CMAKE_COMMAND) -E touch_nocreate libs/libUcoSLAMGUI_videoplayer.so.1.0

libs/libUcoSLAMGUI_videoplayer.so: libs/libUcoSLAMGUI_videoplayer.so.1.0.7
	@$(CMAKE_COMMAND) -E touch_nocreate libs/libUcoSLAMGUI_videoplayer.so

# Rule to build all files generated by this target.
gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/build: libs/libUcoSLAMGUI_videoplayer.so

.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/build

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/requires: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/videoplayer.cpp.o.requires
gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/requires: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/cameracontrols.cpp.o.requires
gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/requires: gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/UcoSLAMGUI_videoplayer_automoc.cpp.o.requires

.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/requires

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/clean:
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer && $(CMAKE_COMMAND) -P CMakeFiles/UcoSLAMGUI_videoplayer.dir/cmake_clean.cmake
.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/clean

gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/depend: gui/videoplayer/ui_cameracontrols.h
	cd /home/zhaoqun/Documents/ucoslam-1.0.7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhaoqun/Documents/ucoslam-1.0.7 /home/zhaoqun/Documents/ucoslam-1.0.7/gui/videoplayer /home/zhaoqun/Documents/ucoslam-1.0.7/build /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer /home/zhaoqun/Documents/ucoslam-1.0.7/build/gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/videoplayer/CMakeFiles/UcoSLAMGUI_videoplayer.dir/depend

