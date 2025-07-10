//Drew

#pragma once
#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(int height, int width, int x, int y);
    Rectangle(int height, int width, int x, int y, int stroke_width, const std::string& stroke_color, const std::string& fill_color);
    void draw(Canvas& c) override;
    void move(int x_move, int y_move);

private:
    int height;
    int width;
    Point corner;
};

