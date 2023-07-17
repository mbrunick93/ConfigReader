cmake_minimum_required(VERSION 3.20.2)

set(This ConfigReaderTest)

set(Sources 
    ConfigReaderTest.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    ConfigReader
)

add_test(
    NAME ${This}
    COMMAND ${This}
)