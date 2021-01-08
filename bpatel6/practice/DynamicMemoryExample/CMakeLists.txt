cmake_minimum_required(VERSION 3.13)
project(DynamicMemoryExample)

set(CMAKE_CXX_STANDARD 14)

configure_file(data.txt data.txt COPYONLY)

add_executable(DynamicMemoryExample main.cpp)