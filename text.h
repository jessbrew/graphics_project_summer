#pragma once
#include "shape.h"

// Ricky
class Text : public Shape {
public:
    Text (std::string text, int x, int y, int font_size, std::string font_color);
    void draw(Canvas& c) override;

private:
    std::string text;
    std::string font_color;
    Point corner;
    int font_size;
};
