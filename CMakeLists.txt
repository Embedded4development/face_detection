cmake_minimum_required(VERSION "${MIN_VER_CMAKE}" FATAL_ERROR)
project(facedetect)

LINK_DIRECTORIES(/home/chints/opencv/opencv/release/lib/)
LINK_LIBRARIES(opencv_highgui opencv_core opencv_imgproc opencv_videoio opencv_objdetect opencv_imgcodecs)
SET(SRC_DIR src)

FILE(GLOB SRC_FILES
${SRC_DIR}/*
)

source_group("face.src" FILES ${SRC_FILES})


add_executable(faceDetect ${SRC_FILES})
