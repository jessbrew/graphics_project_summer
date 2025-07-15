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
    :Circle{radius, x, y} {

    attributes.fill_color = fill_color;
    attributes.stroke_color = stroke_color;
    attributes.stroke_width = stroke_width;
}
void Circle::draw(Canvas &c) {
    c.draw_ellipse({radius,radius}, center, attributes);
    //we use draw_ellipse because that is what the backend team created, but we make the x and y radius the same so then we get a circle
}

void Circle::move(int x_move, int y_move) {
    center.x += x_move;
    center.y += y_move;
}

