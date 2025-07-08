#pragma once
#include <vector>
#include "canvas.h"

// Ricky
class Svg : public Canvas{
public:
    Svg (std::string filename, int canvas_vertical_length, int canvas_horizontal_length);

    void draw_ellipse(Point radius, Point center, Attributes a) override;
    void draw_rectangle(int height, int width, Point start, Attributes a) override;
    void draw_line(Point start, Point end, Attributes a) override;

    void output_svg_file();

private:
    int canvas_vertical_length;
    int canvas_horizontal_length;
    std::vector<std::string> svg_lines;
    std::string filename;
};
