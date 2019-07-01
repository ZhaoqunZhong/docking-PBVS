# ===================================================================================
#  ucoslam CMake configuration file
#
#             ** File generated automatically, do not modify **
#
#  Usage from an external project:
#    In your CMakeLists.txt, add these lines:
#
#    FIND_PACKAGE(ucoslam REQUIRED )
#    TARGET_LINK_LIBRARIES(MY_TARGET_NAME )
#
#    This file will define the following variables:
#      - ucoslam_LIBS          : The list of libraries to links against.
#      - ucoslam_LIB_DIR       : The directory where lib files are. Calling LINK_DIRECTORIES
#                                with this path is NOT needed.
#      - ucoslam_VERSION       : The  version of this PROJECT_NAME build. Example: "1.2.0"
#      - ucoslam_VERSION_MAJOR : Major version part of VERSION. Example: "1"
#      - ucoslam_VERSION_MINOR : Minor version part of VERSION. Example: "2"
#      - ucoslam_VERSION_PATCH : Patch version part of VERSION. Example: "0"
#
# ===================================================================================
INCLUDE_DIRECTORIES("/usr/local/include")
INCLUDE_DIRECTORIES("/usr/local/include/ucoslam")
SET(ucoslam_INCLUDE_DIRS "/usr/local/include")

LINK_DIRECTORIES("/usr/local/lib")
SET(ucoslam_LIB_DIR "/usr/local/lib")
find_package(OpenCV REQUIRED)
INCLUDE_DIRECTORIES(/opt/ros/kinetic/include/opencv-3.3.1-dev;/opt/ros/kinetic/include/opencv-3.3.1-dev/opencv)

SET(ucoslam_LIBS opencv_calib3d;opencv_core;opencv_dnn;opencv_features2d;opencv_flann;opencv_highgui;opencv_imgcodecs;opencv_imgproc;opencv_ml;opencv_objdetect;opencv_photo;opencv_shape;opencv_stitching;opencv_superres;opencv_video;opencv_videoio;opencv_videostab;opencv_viz;opencv_aruco;opencv_bgsegm;opencv_bioinspired;opencv_ccalib;opencv_cvv;opencv_datasets;opencv_dpm;opencv_face;opencv_fuzzy;opencv_hdf;opencv_img_hash;opencv_line_descriptor;opencv_optflow;opencv_phase_unwrapping;opencv_plot;opencv_reg;opencv_rgbd;opencv_saliency;opencv_stereo;opencv_structured_light;opencv_surface_matching;opencv_text;opencv_tracking;opencv_xfeatures2d;opencv_ximgproc;opencv_xobjdetect;opencv_xphoto;ucoslam_fbow;ucoslam_aruco;ucoslam_xflann;ucoslam_g2o_stuff;ucoslam_g2o_core ucoslam)

SET(ucoslam_FOUND YES)
SET(ucoslam_FOUND "YES")
SET(ucoslam_VERSION        1.0.7)
SET(ucoslam_VERSION_MAJOR  1)
SET(ucoslam_VERSION_MINOR  0)
SET(ucoslam_VERSION_PATCH  7)
