#include "garden.h"

Garden::Garden() {}

void Garden::fillGarden(Plant *plants) {
    _plants.push_back(plants);
}

void Garden::checkThirstyPlants() {
    int sum = 0;
    for (int i = 0; i < _plants.size(); ++i) {
        if (_plants[i]->getNeedsWater())
            sum += 1;
    }
    _needsWater = sum;
}

void Garden::watering(float waterAmount) {
    checkThirstyPlants();
    float equalAmount = waterAmount / _needsWater;
    for (int i = 0; i < _plants.size(); ++i) {
        if (_plants[i]->getNeedsWater()) {
            _plants[i]->watering(equalAmount);
        }
    }
    std::cout << "Watering with " << waterAmount << std::endl;
    /*for (int i = 0; i < _plants.size(); ++i) {
        std::cout << _plants[i]->getWaterAmount() << " " << _plants[i]->getColor() << std::endl;
    }*/
}
