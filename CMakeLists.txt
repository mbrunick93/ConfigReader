cmake_minimum_required(VERSION 3.20.2)

project(${This} C CXX)

set(This ConfigReader)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers 
    ConfigReader.hpp
)

set(Sources 
    ConfigReader.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(unit_test)