add_executable (project_executable
    cmake_hello_world.cpp
)

target_include_directories(project_executable PRIVATE
    $(CMAKE_SOURCE_DIR)/include
)

target_link_libraries(project_executable PRIVATE
    foo
)