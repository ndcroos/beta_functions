cmake_minimum_required(VERSION 3.7)
project(beta_functions)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp beta.h)
add_executable(beta_functions ${SOURCE_FILES})