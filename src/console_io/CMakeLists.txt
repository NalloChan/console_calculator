
cmake_minimum_required(VERSION 3.27)

set(library_name ConsoleIO)
add_library(${library_name} console_io.cpp)

target_include_directories(${library_name} PUBLIC ./)
