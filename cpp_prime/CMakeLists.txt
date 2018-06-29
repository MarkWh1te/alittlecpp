cmake_minimum_required(VERSION 3.10)
project(cpp_prime)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp_prime main.cpp)

set(BUILD_2 limit)
set(SOURCE_FILES_2 limit.cpp)
add_executable(${BUILD_2} ${SOURCE_FILES_2})

set(BUILD_3 binary_tree.cpp)
set(SOURCE_FILES_3 binary_tree.cpp)
add_executable(${BUILD_3} ${SOURCE_FILES_3})