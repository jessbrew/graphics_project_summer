//Drew
#include "triangle.h"
#include <stdexcept>

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
    : p1{x1, y2}, p2 {x2, y2}, p3 {x3, y3} {
    if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0 || x3 < 0 || y3 < 0) {
        throw std::runtime_error("all points must be positive");
    }
}

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3, int stroke_width, const std::string & stroke_color)
    : p1{x1, y2}, p2 {x2, y2}, p3 {x3, y3} {
    if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0 || x3 < 0 || y3 < 0) {
        throw std::runtime_error("all points must be positive");
    }
    attributes.stroke_color = stroke_color;
    attributes.stroke_width = stroke_width;
}

Triangle::Triangle(Point p1, Point p2, Point p3)
    : p1{p1}, p2{p2}, p3{p3} {}

Triangle::Triangle(Point p1, Point p2, Point p3, int stroke_width, const std::string & stroke_color)
    : p1{p1}, p2{p2}, p3{p3} {

    attributes.stroke_color = stroke_color;
    attributes.stroke_width = stroke_width;
}

void Triangle::draw(Canvas &c) {
    c.draw_line(p1, p2, attributes);
    c.draw_line(p2, p3, attributes);
    c.draw_line(p3, p1, attributes);
    // we are drawing our triangle by individually making three lines
}
void Triangle::move(int x_move, int y_move) {
    p1.x += x_move;
    p1.y += y_move;
    p2.x += x_move;
    p2.y += y_move;
    p3.x += x_move;
    p3.y += y_move;
}
