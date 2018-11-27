#include <iostream>
#include "animal.h"

int main() {

    Animal animal;

    std::cout << "Hunger level: " << animal.getHunger() << " " << "Thirst level: " << animal.getThirst() << std::endl;
    animal.eat();
    std::cout << "Hunger level: " << animal.getHunger() << " " << "Thirst level: " << animal.getThirst() << std::endl;
    animal.drink();
    std::cout << "Hunger level: " << animal.getHunger() << " " << "Thirst level: " << animal.getThirst() << std::endl;
    animal.play();
    std::cout << "Hunger level: " << animal.getHunger() << " " << "Thirst level: " << animal.getThirst() << std::endl;

    return 0;
}

















/*std::string name;
   std::cout << " Enter a name of animal" << std::endl;
   std::cin >> name;

   Animal animal (name);
   std::cout << " " << animal.getHunger() << std::endl;
   animal.eat();
   std::cout << " " << animal.getHunger() << std::endl;
   animal.play();*/