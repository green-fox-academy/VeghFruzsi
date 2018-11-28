cmake_minimum_required(VERSION 3.12)
project(02_instrument)

set(CMAKE_CXX_STANDARD 14)

add_executable(02_instrument main.cpp instrument.cpp instrument.h stringedinstrument.cpp stringedinstrument.h electricguitar.cpp electricguitar.h bassguitar.cpp bassguitar.h violin.cpp violin.h)