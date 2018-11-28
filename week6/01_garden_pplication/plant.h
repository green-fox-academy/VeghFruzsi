#ifndef INC_01_GARDEN_PPLICATION_PLANT_H
#define INC_01_GARDEN_PPLICATION_PLANT_H

#include <iostream>

class Plant {
public:
    Plant();

    Plant(float waterAmount, std::string color);

    virtual void watering(float waterAmount) = 0;

    bool getNeedsWater();

    float getWaterAmount();

    std::string getColor();

protected:
    float _waterAmount;
    std::string _color;
    bool _needsWater;
};


#endif //INC_01_GARDEN_PPLICATION_PLANT_H
