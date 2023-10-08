
cmake_minimum_required(VERSION 3.27)

set(project_name console_calculator)
project(${project_name} CXX)

set(CMAKE_INSTALL_PREFIX "./install" CACHE STRING "install path" FORCE)
include (${CMAKE_SOURCE_DIR}/cmakes/compile_option.cmake)

add_executable(${project_name} src/main.cpp)

option(BUILD_TESTS "BUILD_TESTS" ON)
if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(./test)
endif()
