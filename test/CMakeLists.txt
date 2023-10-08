
cmake_minimum_required(VERSION 3.27)

set(GTest_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(${GTest_DIR})
include(GoogleTest)

include(${CMAKE_SOURCE_DIR}/cmakes/compile_option.cmake)

add_subdirectory(./main)
