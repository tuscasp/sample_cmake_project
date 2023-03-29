# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.13)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

project (my_project C CXX)

add_subdirectory (src)

if(CMAKE_BUILD_TYPE STREQUAL Debug)
    add_subdirectory (test)
endif()
