#include "svg.h"
#include "circle.h"
#include "rectangle.h"
#include "line.h"
#include "text.h"

int main () {
    Svg svg_file("test_svg.svg", 1920, 1080);

    Circle circle(100, 110, 110, 20, "red", "blue");
    circle.draw(svg_file);

    Rectangle rectangle(100, 200, 300, 500, 25, "purple", "yellow");
    rectangle.draw(svg_file);

    Line line(100, 700, 1000, 100,50, "orange");
    line.draw(svg_file);

    Text text("why hello there", 700, 700, 15, "blue");
    text.draw(svg_file);

    svg_file.output();
}