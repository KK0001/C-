cmake_minimum_required(VERSION 3.5)
project(20while)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(20while ${SOURCE_FILES})