
// Created by drew on 7/8/2025.

#pragma once

#include "../shared_utils/attributes.h"
#include "../canvas_lib/canvas.h"

class Shape {
public:
    Attributes attributes;
    virtual void draw(Canvas& c) = 0;
    virtual void move(int x_move, int y_move) = 0;
};




