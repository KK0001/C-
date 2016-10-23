cmake_minimum_required(VERSION 3.5)
project(00)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp tes.cpp)
add_executable(00 ${SOURCE_FILES})