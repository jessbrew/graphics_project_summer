#pragma once
#include "canvas.h"

class Svg : public Canvas{
public:
    Svg ();
    void draw_ellipse(Point radius, Point center, Attributes a) override;
    void draw_rectangle(int height, int width, Point start, Attributes a) override;
    void draw_line(Point start, Point end, Attributes a) override;
};
