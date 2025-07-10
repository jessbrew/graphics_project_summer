//Made by Drew

#pragma once
#include "shape.h"

class Circle : public Shape {
public:
    Circle(int radius, int x, int y);
    Circle(int radius, int x, int y, int stroke_width,const std::string& stroke_color, const std::string& fill_color);
    void draw(Canvas &c) override;
    void move(int x_move, int y_move) override;

private:
    int radius;
    Point center;

};

