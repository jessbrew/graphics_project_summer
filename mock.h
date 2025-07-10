#pragma once
#include "canvas.h"

// Ricky

class Mock : public Canvas{
public:
    void draw_ellipse(Point radius, Point center, Attributes a) override;
    void draw_rectangle(int height, int width, Point start, Attributes a) override;
    void draw_line(Point start, Point end, Attributes a) override;
    void draw_polygon(const std::vector<Point> &points, Attributes a) override;
    void draw_text(std::string text, Point corner, int font_size, std::string font_color) override;
};
