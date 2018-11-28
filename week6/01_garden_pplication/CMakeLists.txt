cmake_minimum_required(VERSION 3.12)
project(01_garden_pplication)

set(CMAKE_CXX_STANDARD 14)

add_executable(01_garden_pplication main.cpp garden.cpp garden.h flower.cpp flower.h tree.cpp tree.h plant.cpp plant.h)