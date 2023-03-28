# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.13)

project (my_project C CXX)

if(WIN32)
    set(CMAKE_GENERATOR "MinGW Makefiles")
else()
    set (CMAKE_GENERATOR "Unix Makefiles")
endif()

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

add_subdirectory (src)
