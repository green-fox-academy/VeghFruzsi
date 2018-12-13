cmake_minimum_required(VERSION 3.12)
project(tdd)

set(CMAKE_CXX_STANDARD 14)

add_executable(tdd_run main.cpp)

include_directories(tdd_lib)
add_subdirectory(tdd_lib)
add_subdirectory(tdd_test)

target_link_libraries(tdd_run tdd)