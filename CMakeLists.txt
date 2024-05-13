cmake_minimum_required(VERSION 3.14)

project(molten)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# Avoid compiler/linker override by gtest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()

add_executable(
    molten
    test.cpp
)

target_link_libraries(
    molten
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(molten)
