cmake_minimum_required(VERSION 3.10)
project(console_forge CXX)
set(CMAKE_BUILD_TYPE Debug)

add_executable(console_forge main.cpp)
include(CTest)
enable_testing()