#include "plant.h"

Plant::Plant() {}

Plant::Plant(float waterAmount, std::string color) {
    _waterAmount = waterAmount;
    _color = color;
    _needsWater = false;
}

bool Plant::getNeedsWater() {
    return _needsWater;
}

std::string Plant::getColor() {
    return _color;
}

float Plant::getWaterAmount() {
    return _waterAmount;
}
