#include <iostream>
#include "tree.h"
#include "flower.h"
#include "garden.h"
#include "plant.h"
#include <vector>

int main() {

    Flower flower1 (1, "yellow");
    Flower flower2 (1, "blue");
    Tree tree1 (1, "purple");
    Tree tree2 (1, "orange");

    Garden garden;
    garden.fillGarden(&tree1);
    garden.fillGarden(&tree2);
    garden.fillGarden(&flower1);
    garden.fillGarden(&flower2);

    garden.watering(40);
    garden.watering(70);

    return 0;
}