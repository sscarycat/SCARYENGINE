cmake_minimum_required(VERSION 4.2)
project(SCARYENGINE)

set(CMAKE_CXX_STANDARD 20)

add_executable(SCARYENGINE main.cpp
        SCARYENGINE/SCARYENGINE.cpp
        SCARYENGINE/SCARYENGINE.h)
