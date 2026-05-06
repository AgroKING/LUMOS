# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.15...4.1)
project(LUMOS)
add_executable(LUMOS hello.cpp
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
        src/eigen.cpp)
target_include_directories(LUMOS PUBLIC include)
set(CMAKE_CXX_STANDARD 20)


