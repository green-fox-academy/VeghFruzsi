#ifndef INC_03_ANIMAL_ANIMAL_H
#define INC_03_ANIMAL_ANIMAL_H

#include <iostream>


class Animal {
public:

    Animal();

    int getHunger();
    int getThirst();

    void eat();
    void drink();
    void play();

private:

    int _hunger;
    int _thirst;

};

#endif //INC_03_ANIMAL_ANIMAL_H