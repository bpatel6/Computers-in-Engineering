cmake_minimum_required(VERSION 3.13)
project(hw3)

set(CMAKE_CXX_STANDARD 14)
configure_file(birthdays.txt birthdays.txt COPYONLY)
add_executable(hw3 main.cpp Date.cpp Date.h)