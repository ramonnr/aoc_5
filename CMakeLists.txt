cmake_minimum_required(VERSION 3.16)
project(aoc5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
find_package(Threads REQUIRED)
set(aoc5 src/main.cpp)

add_executable(aoc5 ${aoc5})
