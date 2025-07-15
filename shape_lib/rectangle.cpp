
//Drew

#include "rectangle.h"
#include <stdexcept>

Rectangle::Rectangle(int height, int width, int x, int y)
    : height{height}, width{width}, corner{x,y} // corner is a point, so we use x and y
    {
    if (height < 0) {
        throw std::runtime_error("height must be positive");
    }
    if (width < 0) {
        throw std::runtime_error("width must be positive");
    }
    if (x < 0 || y < 0) {
        throw std::runtime_error("x and y must be positive");
    }
}
Rectangle::Rectangle(int height, int width, int x, int y, int stroke_width, const std::string& stroke_color, const std::string& fill_color)
    : Rectangle{height, width, x, y} {

    attributes.fill_color = fill_color;
    attributes.stroke_color = stroke_color;
    attributes.stroke_width = stroke_width;
    // We only include attributes in this definition because the previous definition uses the default attributes from attributes.h
}

void Rectangle::draw(Canvas& c) {
    c.draw_rectangle (height, width, corner, attributes); // got these parameters from backend team in svg.cpp
}

void Rectangle::move(int x_move, int y_move) {
    corner.x += x_move;
    corner.y += y_move;
}
