//
// Created by zhimo on 7/8/2025.
//
#pragma once
#include "point.h"
#include "attributes.h"
#include <vector>

class Canvas {
public:
    virtual void draw_ellipse(Point radius, Point center, Attributes a) = 0;
    virtual void draw_rectangle(int height, int width, Point start, Attributes a) = 0;
    virtual void draw_line(Point start, Point end, Attributes a) = 0;
    virtual void draw_text(std::string text, Point corner,int font_size, std::string font_color) = 0;
    virtual void draw_polygon(const std::vector <Point> &points, Attributes a) = 0;
};


