cmake_minimum_required(VERSION 3.12)
project(01_pi C)

set(CMAKE_C_STANDARD 99)

add_executable(01_pi main.c pi.h pi.c)