//
// Created by Ricky on 7/10/25.
//

#include "text.h"

#include <stdexcept>

Text::Text(std::string text, int x, int y, int font_size, std::string font_color)
    :text{text}, corner{x,y}, font_size{font_size}, font_color{font_color} {
    if (text.empty()) {
        throw std::runtime_error("Text must be given.");
    } else if (x < 0 or y < 0) {
        throw std::runtime_error("A positive coordinate must be given.");
    } else if (font_size <= 0 ) {
        throw std::runtime_error("A positive font size must be given.");
    } else if (font_color.empty()) {
        throw std::runtime_error("A font color must be given.");
    }
}

void Text::draw(Canvas &c) {
    c.draw_text(text, corner, font_size, font_color);
}
