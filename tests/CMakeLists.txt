cmake_minimum_required(VERSION 3.16)
project(aoc_test)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
find_package(Catch2 REQUIRED)
find_package(Threads REQUIRED)
set(tests tests.cpp)

add_executable(tests ${tests})
target_link_libraries(tests Catch2::Catch2WithMain ${CMAKE_THREAD_LIBS_INIT})
