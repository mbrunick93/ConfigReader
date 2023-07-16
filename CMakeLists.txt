cmake_minimum_required(VERSION 3.20.2)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(ConfigReader)
add_library(ConfigReader STATIC ConfigReader.cpp)
