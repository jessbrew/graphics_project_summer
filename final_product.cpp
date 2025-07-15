#include <iostream>
#include "canvas_lib/svg.h"
#include "shape_lib/circle.h"
#include "shape_lib/rectangle.h"
#include "shape_lib/line.h"
#include "shape_lib/polygon.h"
#include "shape_lib/text.h"
#include "shape_lib/triangle.h"

int main () {
    try {
        Svg svg_file{"all_shapes_example.svg", 1080, 1920};

        Circle circle{100, 150, 150, 20, "red", "blue"};
        circle.draw(svg_file);

        Rectangle rectangle{100, 300, 500, 150, 25, "purple", "yellow"};
        rectangle.draw(svg_file);

        Line line{100, 700, 1000, 300,50, "orange"};
        line.draw(svg_file);

        Text text{"why hello there", 700, 700, 30, "blue"};
        text.draw(svg_file);

        std::vector<Point> points = {{1000, 30}, {1700, 200}, {1700, 400}, {1200, 240}, {850, 150}};
        Polygon polygon{points};
        polygon.draw(svg_file);

        Triangle triangle{1000, 800, 1200, 400, 1800, 800};
        triangle.draw(svg_file);

        svg_file.output();
    } catch (std::exception& e) {
        std::cerr << e.what();
    }
}
