#pragma once

#include <vector>
#include "shape.h"
#include "point.h"

class Polygon : public Shape{
public:
    Polygon(const std::vector<Point>& points);
    Polygon(const std::vector<Point>& points, int stroke_width, const std::string& stroke_color, const std::string& fill_color);
    void draw(Canvas &c) override;
    void move(int x_move, int y_move) override;

private:
    std::vector<Point> points;
};
