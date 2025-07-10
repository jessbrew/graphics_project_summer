// Created by drew on 7/8/2025.

#include "circle.h"
#include <stdexcept>

Circle::Circle(int radius, int x, int y)
    : radius{radius}, center{x,y} {
    if (radius < 0) {
        throw std::runtime_error("radius must be positive");
    }
    if (x < 0 || y < 0) {
        throw std::runtime_error("x and y must be positive");
    }
}

Circle::Circle(int radius, int x, int y, int stroke_width, const std::string& stroke_color, const std::string& fill_color)
    :radius{radius}, center{x,y} {
    if (radius < 0) {
        throw std::runtime_error("radius must be positive");
    }
    if (x < 0 || y < 0) {
        throw std::runtime_error("x and y must be positive");
    }
    attributes.fill_color = fill_color;
    attributes.stroke_color = stroke_color;
    attributes.stroke_width = stroke_width;
}
void Circle::draw(Canvas &c) {
    c.draw_ellipse({radius,radius}, center, attributes);
}