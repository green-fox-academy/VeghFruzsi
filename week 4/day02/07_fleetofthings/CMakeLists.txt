cmake_minimum_required(VERSION 3.12)
project(07_fleetofthings)

set(CMAKE_CXX_STANDARD 14)

add_executable(07_fleetofthings main.cpp thing.cpp thing.h fleet.cpp fleet.h)