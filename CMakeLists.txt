cmake_minimum_required(VERSION 3.14)

project(molten)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    molten
    test.cpp
)

target_link_libraries(
    molten
)
