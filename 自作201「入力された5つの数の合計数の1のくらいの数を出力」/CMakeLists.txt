cmake_minimum_required(VERSION 3.5)
project(20151)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(20151 ${SOURCE_FILES})