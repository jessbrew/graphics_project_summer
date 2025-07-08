#pragma once
#include <string>

// Ricky
class Key {
public:
    Key (std::string key);
    Key (int key);

    std::string get ();

private :
    std::string key;
};