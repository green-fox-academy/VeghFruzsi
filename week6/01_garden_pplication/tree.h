#ifndef INC_01_GARDEN_PPLICATION_TREE_H
#define INC_01_GARDEN_PPLICATION_TREE_H

#include <iostream>
#include "plant.h"

class Tree : public Plant {
public:
    Tree();
    Tree(float waterAmount, std::string color);
    void watering(float waterAmount) override;
};


#endif //INC_01_GARDEN_PPLICATION_TREE_H
