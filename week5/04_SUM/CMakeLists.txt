cmake_minimum_required(VERSION 3.12)
project(04_SUM)

set(CMAKE_CXX_STANDARD 14)

add_executable(04_SUM main.cpp SUM/sum.cpp SUM/sum.h SUM_test/sum_test.cpp)