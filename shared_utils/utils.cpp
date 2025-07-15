//
// Created by gamer on 7/8/2025.
//
#include "utils.h"


//Ricky
std::string key_pair(std::string key, int input) {
    return key + "=\"" + std::to_string(input) + "\" ";
}

// Ricky
std::string key_pair(std::string key, std::string input) {
    return key + "=\"" + input + "\" ";
}

//Amos
//prints the points for the svg file for polygons
 std::string points_to_string(std::vector<Point> points) {
    std::string points_text {"points=\""};
     for (Point point : points) {
         points_text += std::to_string(point.x) + "," + std::to_string(point.y) + " ";
     }
    points_text += "\" ";
    return points_text;
 }