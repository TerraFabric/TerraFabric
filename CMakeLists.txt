cmake_minimum_required(VERSION 3.5.0)

project(terrafabric)

set(SOURCE_FILES src/main.cpp)

add_executable(terrafabric ${SOURCE_FILES})

target_link_libraries(terrafabric glfw GL)