#pragma once
#include <vector>
#include "canvas.h"

// Ricky
class Svg : public Canvas{
public:
    Svg (std::string filename, int canvas_height, int canvas_width);

    void draw_ellipse(Point radius, Point center, Attributes a) override;
    void draw_rectangle(int height, int width, Point start, Attributes a) override;
    void draw_line(Point start, Point end, Attributes a) override;
    void draw_text(std::string text, Point corner,int font_size, std::string font_color);

    void draw_polygon(const std::vector<Point> &points, Attributes a) override;

    void output();

private:
    int canvas_height;
    int canvas_width;
    std::vector<std::string> lines;
    std::string filename;
};
