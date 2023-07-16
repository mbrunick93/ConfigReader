cmake_minimum_required(VERSION 3.20.2)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)
project(ConfigReader)
add_library(ConfigReader STATIC ConfigReader.cpp)
