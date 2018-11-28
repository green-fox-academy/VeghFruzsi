#include "tree.h"
#include <iostream>

Tree::Tree() {}

Tree::Tree(float waterAmount, std::string color) {
    _waterAmount = waterAmount;
    _color = color;

}

void Tree::watering(float waterAmount) {
    if (_waterAmount < 10) {
        _needsWater = true;
        std::cout << "The " << _color << " Tree needs water." << std::endl;
    } else {
        _needsWater = false;
        std::cout << "The " << _color << " Tree doesnt need water." << std::endl;
    }
    _waterAmount += waterAmount * 0.4;
}




