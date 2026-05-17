cmake_minimum_required(VERSION 4.2)
project(SCARYENGINE)

set(CMAKE_CXX_STANDARD 20)

add_executable(SCARYENGINE
        SCARYENGINE/SCARYENGINE.cpp
        SCARYENGINE/SCARYENGINE.h)


target_link_libraries(SCARYENGINE winmm)
