cmake_minimum_required(VERSION 3.12)
project(02_zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(02_zoo main.cpp animal.cpp animal.h bird.cpp bird.h mammal.cpp mammal.h reptile.cpp reptile.h)