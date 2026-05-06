# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.15...4.1)
project(LUMOS)
set(CMAKE_CXX_STANDARD 20)
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/52eb8108c5bdec04579160ae17225d66034bd723.zip
)
FetchContent_MakeAvailable(googletest)
add_executable(LUMOS  hello.cpp
        include/vector.h
        include/matrix.h
        include/operations.h
        include/decomposition.h
        include/eigen.h
        include/exceptions.h
        src/vector.cpp
        src/matrix.cpp
        src/operations.cpp
        src/decomposition.cpp
        src/eigen.cpp
        )
target_include_directories(LUMOS PUBLIC include)
enable_testing()

add_executable(
        hello_test
        hello_test.cpp
        src/vector.cpp
)
target_link_libraries(
        hello_test
        GTest::gtest_main
)
target_include_directories(hello_test PRIVATE include)

include(GoogleTest)
gtest_discover_tests(hello_test)