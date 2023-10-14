
cmake_minimum_required(VERSION 3.27)

set(library_name Calculator)
add_library(${library_name} calculator.cpp)

target_include_directories(${library_name} PUBLIC ./)
