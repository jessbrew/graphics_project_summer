#include <iostream>
#include "mock.h"
#include "circle.h"
#include "rectangle.h"
#include "line.h"
#include "triangle.h"

int main () {
    try {
        Mock canvas;
        Circle c {10, 20, 30, 8, "orange", "black"};
        c.draw(canvas);
        Rectangle r {10,20, 40,40};
        r.draw(canvas);
        Line l {10,20, 40,45};
        l.draw(canvas);
        Triangle t {1,2,50,45,30,22};
        t.draw(canvas);
        Triangle tri {{1,1}, {20,25}, {50,78}, 6, "brown" };
        tri.draw(canvas);


    }catch (std::exception &e) {
        std::cout << e.what();
    }
}