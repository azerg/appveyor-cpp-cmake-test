cmake_minimum_required(VERSION 2.8)
project(foo)

add_executable(foo foo.cpp)

enable_testing()
add_test(foo foo)