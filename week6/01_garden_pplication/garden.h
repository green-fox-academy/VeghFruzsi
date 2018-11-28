#ifndef INC_01_GARDEN_PPLICATION_GARDEN_H
#define INC_01_GARDEN_PPLICATION_GARDEN_H

#include "tree.h"
#include "flower.h"
#include "plant.h"
#include <vector>

class Garden {
public:
    Garden();
    void fillGarden (Plant* plants);
    void watering (float waterAmount);
    void checkThirstyPlants();

private:
    std::vector<Plant*> _plants;
    int _needsWater = 0;

};


#endif //INC_01_GARDEN_PPLICATION_GARDEN_H
