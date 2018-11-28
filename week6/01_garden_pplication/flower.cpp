#include "flower.h"

Flower::Flower() {}

Flower::Flower(float waterAmount, std::string color) {
    _waterAmount = waterAmount;
    _color = color;
}

void Flower::watering(float waterAmount) {
    if (_waterAmount < 5) {
        _needsWater = true;
        std::cout << "The " << _color << " Flower needs water." << std::endl;
    } else {
        _needsWater = false;
        std::cout << "The " << _color << " Flower doesnt need water." << std::endl;
    }
    _waterAmount += waterAmount * 0.75;
}




