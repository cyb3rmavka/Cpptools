cmake_minimum_required(VERSION 3.24)
project(Cpptools)

set(CMAKE_CXX_STANDARD 23)

add_executable(Cpptools main.cpp print.h algorithm_tools.h string_tools.h tools_file_system.h)
