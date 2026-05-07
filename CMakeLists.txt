cmake_minimum_required(VERSION 3.10)
project(BubbleSortDemo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(bubble_sort src/main.cpp src/bubble_sort.cpp)