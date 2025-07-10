//
// Created by gamer on 7/8/2025.
//

#include "key_util.h"

//Ricky
std::string key_pair(std::string key, int input) {
    return key + "=\"" + std::to_string(input) + "\"";
}

// Ricky
std::string key_pair(std::string key, std::string input) {
    return key + "=\"" + input + "\"";
}