#include "animal.h"
#include <iostream>



Animal::Animal(){
    _hunger = 50;
    _thirst = 50;
}

int Animal::getHunger() {
    return _hunger;
}

int Animal::getThirst() {
    return _thirst;
}

void Animal::eat() {
    _hunger--;
}

void Animal::drink() {
    _thirst--;
}

void Animal::play() {
    _hunger++;
    _thirst++;
}