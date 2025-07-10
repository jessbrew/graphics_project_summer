cmake_minimum_required(VERSION 3.30)
add_compile_options(-std=c++17 -g -O2)
project(graphics_project)

set(CMAKE_CXX_STANDARD 20)
add_library(canvas canvas_lib/canvas.cpp canvas_lib/canvas.h
        shared_utils/point.cpp
        shared_utils/point.h
        shared_utils/attributes.cpp
        shared_utils/attributes.h
        shape_lib/mock.cpp
        shape_lib/mock.h
        canvas_lib/svg.cpp
        canvas_lib/svg.h
        shared_utils/utils.cpp
        shared_utils/utils.h)
add_executable(canvas_testing test_canvas.cpp)
target_link_libraries(canvas_testing PUBLIC canvas)

add_executable(graphics_project test_shapes.cpp)
add_library(shapes shape_lib/shape.cpp shape_lib/shape.h
        shape_lib/circle.cpp
        shape_lib/circle.h
        shape_lib/rectangle.h
        shape_lib/rectangle.cpp
        shape_lib/line.cpp
        shape_lib/text.cpp
        shape_lib/text.h
        shape_lib/line.h
        shape_lib/triangle.cpp
        shape_lib/triangle.h
        shape_lib/polygon.cpp
        shape_lib/polygon.h)
target_link_libraries(graphics_project PUBLIC shapes canvas)

add_executable(final_product final_product.cpp)
target_link_libraries(final_product PUBLIC shapes canvas)