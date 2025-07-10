// Drew
#pragma once
#include "shape.h"

class Line : public Shape {
public:
    Line(int start_x, int start_y, int end_x, int end_y );
    Line(int start_x, int start_y, int end_x, int end_y, int stroke_width, const std::string& stroke_color);
    void draw(Canvas &c) override;

private:
    Point start;
    Point end;

};

