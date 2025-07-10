#include <iostream>
#include "mock.h"
#include "circle.h"
#include "rectangle.h"



int main () {
    try {
        Mock canvas;
        Circle c {10, 20, 30, 8, "orange", "black"};
        c.draw(canvas);


    }catch (std::exception &e) {
        std::cout << e.what();
    }
}