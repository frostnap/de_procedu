# 'Google_test' is the subproject name
set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.17)
project(Google_tests)
# 'lib' is the folder with Google Test sources
add_subdirectory(googletest-master)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run tests/test1.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)