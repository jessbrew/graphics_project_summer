#include "svg.h"
#include <stdexcept>

// Ricky
Svg::Svg(int canvas_vertical_length, int canvas_horizontal_length)
    :filename{filename}, canvas_vertical_length{canvas_vertical_length}, canvas_horizontal_length{canvas_horizontal_length} {
    if (canvas_horizontal_length < 1) {
        throw std::runtime_error("A positive horizontal canvas length is required.");
    } else if (canvas_vertical_length < 1) {
        throw std::runtime_error("A positive horizontal canvas length is required.");
    }

    // add file header
    svg_lines.push_back("<html>");
    svg_lines.push_back("<body>");
    svg_lines.push_back("<svg width="" + std::to_string(Svg::canvas_horizontal_length) + '" height="''" xmlns="http://www.w3.org/2000/svg">');
}

