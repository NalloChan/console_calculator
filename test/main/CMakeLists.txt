
cmake_minimum_required(VERSION 3.27)

set(TestName TestMain)

add_executable(${TestName} test_main.cpp)

target_link_libraries(${TestName} gtest_main)
gtest_discover_tests(${TestName})
