cmake_minimum_required(VERSION 3.27)
project(cpluspluslearning)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion")

add_executable(cpluspluslearning main.cpp
        add.cpp
        add.h)
