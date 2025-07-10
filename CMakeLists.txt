cmake_minimum_required(VERSION 3.30)
add_compile_options(-std=c++17 -g -O2)
project(graphics_project)

set(CMAKE_CXX_STANDARD 20)
add_library(canvas canvas.cpp canvas.h
        point.cpp
        point.h
        attributes.cpp
        attributes.h
        mock.cpp
        mock.h
        svg.cpp
        svg.h
        key_util.cpp
        key_util.h)
add_executable(canvas_testing test_canvas.cpp)
target_link_libraries(canvas_testing PUBLIC canvas)

add_executable(graphics_project test_shapes.cpp)
add_library(shapes shape.cpp shape.h
        circle.cpp
        circle.h
rectangle.h
rectangle.cpp)
target_link_libraries(graphics_project PUBLIC shapes)
