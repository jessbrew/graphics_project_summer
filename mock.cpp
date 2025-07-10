//
// Created by Ricky on 7/
#include "mock.h"
#include <iostream>

void Mock::draw_ellipse(Point radius, Point center, Attributes a) {
    std::cout << "drawing ellipse\n";
}

void Mock::draw_line(Point start, Point end, Attributes a) {
    std::cout << "drawing line\n";
}

void Mock::draw_rectangle(int height, int width, Point start, Attributes a) {
    std::cout << "drawing rectangle\n";
}

void Mock::draw_polygon(const std::vector<Point> &points, Attributes a) {
    std::cout << "drawing polygon\n";
}
