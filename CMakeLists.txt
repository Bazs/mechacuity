cmake_minimum_required(VERSION 3.20)
project(mechacuity)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(type_erasure)

add_executable(mechacuity main.cpp)