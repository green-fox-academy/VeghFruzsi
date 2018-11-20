cmake_minimum_required(VERSION 3.12)
project(01_greenfox)

set(CMAKE_CXX_STANDARD 14)

add_executable(01_greenfox main.cpp person.cpp person.h student.cpp student.h mentor.cpp mentor.h sponsor.cpp sponsor.h)