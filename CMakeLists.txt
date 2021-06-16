cmake_minimum_required(VERSION 3.19)
project(IT206)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(IT206
        main.cpp
        Patient.cpp
        Patient.h)
