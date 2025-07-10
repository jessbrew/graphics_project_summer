
//Drew

#include "rectangle.h"
#include <stdexcept>

Rectangle::Rectangle(int length, int width, int x, int y)
    : length{length}, width{width}, corner{x,y} {
    if (length < 0) {
        throw std::runtime_error("length must be positive");
    }
    if (width < 0) {
        throw std::runtime_error("width must be positive");
    }
    if (x < 0 || y < 0) {
        throw std::runtime_error("x and y must be positive");
    }
}
Rectangle::Rectangle(int length, int width, int x, int y, int stroke_width, const std::string& stroke_color, const std::string& fill_color)
    : length{length}, width{width}, corner{x,y} {
    if (length < 0) {
        throw std::runtime_error("length must be positive");
    }
    if (width < 0) {
        throw std::runtime_error("width must be positive");
    }
    if (x < 0 || y < 0) {
        throw std::runtime_error("x and y must be positive");
    }
    attributes.fill_color = fill_color;
    attributes.stroke_color = stroke_color;
    attributes.stroke_width = stroke_width;
}

void draw(Canvas& c) {

}

