//Drew
#pragma once
#include "line.h"
#include "shape.h"


class Triangle : public Shape {
public:
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3, int stroke_width, const std::string & stroke_color);
    Triangle(Point p1, Point p2, Point p3);
    Triangle(Point p1, Point p2, Point p3, int stroke_width, const std::string & stroke_color);
    // user can enter values as ordered pairs {x,y}, or without curly brackets but still with commas
    void draw(Canvas &c) override;
    void move(int x_move, int y_move) override;


private:
    Point p1;
    Point p2;
    Point p3;
};

