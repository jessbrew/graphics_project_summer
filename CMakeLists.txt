cmake_minimum_required(VERSION 3.30)
project(graphics_project)

set(CMAKE_CXX_STANDARD 20)
add_library(canvas canvas.cpp canvas.h
        point.cpp
        point.h
        attributes.cpp
        attributes.h
        mock.cpp
        mock.h)
add_executable(canvas_testing test_canvas.cpp)
target_link_libraries(canvas_testing PUBLIC canvas)
add_executable(graphics_project test_shapes.cpp)
