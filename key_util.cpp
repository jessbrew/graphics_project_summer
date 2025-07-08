//
// Created by gamer on 7/8/2025.
//

#include "key_util.h"

// Ricky
Key::Key(std::string key)
    :key{key} {}

//Ricky
Key::Key(int key)
    :key{std::to_string(key)} {}

// Ricky
std::string Key::get() {
    return "\"" + key + "\"";
}