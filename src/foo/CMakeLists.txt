add_library (foo STATIC
    foo.cpp
)

target_include_directories(foo PUBLIC
    $(CMAKE_SOURCE_DIR)/include
)