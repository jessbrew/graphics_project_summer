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
//prints the points for the svg file
 std::string points_to_string(std::vector<Point> points) {
    std::string points_text {"points=\""};
     for (int i{0}; i < points.size(); ++i) {
         points_text += points.at(i).x + "," + points.at(i).y + ' ';
     }
    return points_text;
 }
