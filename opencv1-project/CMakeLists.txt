cmake_minimum_required(VERSION 3.13)
project(opencv1_project)

set(CMAKE_CXX_STANDARD 14)
set(OpenCV_DIR %OPENCV_DIR%)
find_package(OpenCV REQUIRED)

add_executable(opencv1_project main.cpp image_bluring.h image_bluring.cpp )

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(opencv1_project ${OpenCV_LIBS})



