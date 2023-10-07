
cmake_minimum_required(VERSION 3.27)
project(console_calculator CXX)
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/**/*.cpp")
add_executable(console_calculator src/main.cpp ${SOURCES})
target_compile_features(console_calculator PUBLIC cxx_std_20)
target_compile_options(console_calculator PUBLIC -Wall -Wextra -pedantic -Werror)
