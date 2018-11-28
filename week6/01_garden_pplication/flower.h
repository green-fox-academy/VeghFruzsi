#ifndef INC_01_GARDEN_PPLICATION_FLOWER_H
#define INC_01_GARDEN_PPLICATION_FLOWER_H

#include <iostream>
#include "plant.h"

class Flower : public Plant{
public:
    Flower();
    Flower(float waterAmount, std::string color);
    void watering(float waterAmount) override;


};


#endif //INC_01_GARDEN_PPLICATION_FLOWER_H
