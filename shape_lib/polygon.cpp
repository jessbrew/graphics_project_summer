#include "polygon.h"
#include <stdexcept>

Polygon::Polygon(const std::vector<Point> &points)
    : points{points} {
    if (points.size() < 3 ) {
        throw std::runtime_error("Must have at least three points in a polygon");
    }
}

Polygon::Polygon(const std::vector<Point> &points, int stroke_width, const std::string &stroke_color, const std::string &fill_color)
    : Polygon(points){
    attributes.stroke_width = stroke_width;
    attributes.stroke_color = stroke_color;
    attributes.fill_color = fill_color;
}

void Polygon::draw(Canvas &c) {
    c.draw_polygon(points, attributes);
}

void Polygon::move(int x_move, int y_move) {
    for (Point& p : points) {
        p.x += x_move;
        p.y += y_move;
    }
}