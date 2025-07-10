//Drew
#include "line.h"
#include <stdexcept>



Line::Line(int start_x, int start_y, int end_x, int end_y)
    : start{start_x, start_y}, end{end_x, end_y} {
    if (start_x < 0 || start_y < 0 || end_x < 0 || end_y < 0) {
        throw std::runtime_error("all values must be positive");
    }
}
Line::Line(int start_x, int start_y, int end_x, int end_y, int stroke_width, const std::string& stroke_color)
    : start{start_x, start_y}, end{end_x, end_y} {
    if (start_x < 0 || start_y < 0 || end_x < 0 || end_y < 0) {
        throw std::runtime_error("all values must be positive");
    }
    attributes.stroke_color = stroke_color;
    attributes.stroke_width = stroke_width;
}

void Line::draw(Canvas &c) {
    c.draw_line(start, end, attributes);
}

