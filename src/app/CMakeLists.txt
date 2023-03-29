add_executable (project_executable
    cmake_hello_world.cpp
)

target_include_directories(project_executable PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(project_executable PRIVATE
    foo
)