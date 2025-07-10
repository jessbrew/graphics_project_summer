#include <iostream>
#include "mock.h"
#include "circle.h"
#include "rectangle.h"
#include "line.h"


int main () {
    try {
        Mock canvas;
        Circle c {10, 20, 30, 8, "orange", "black"};
        c.draw(canvas);
        Rectangle r {10,20, 40,40};
        r.draw(canvas);
        Line l {10,20, 40,45};
        l.draw(canvas);


    }catch (std::exception &e) {
        std::cout << e.what();
    }
}