cmake_minimum_required(VERSION 3.10)

project(dc-circuit-calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(dc-circuit-calculator src/main.cpp src/Rezystor.cpp)