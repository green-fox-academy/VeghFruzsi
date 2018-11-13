#include <iostream>

#include "sharpie.h"

int main() {


    Sharpie sharpie("blue", 7.4);

    std::cout << "Ink amount is: " << sharpie.getInkAmount() << " " << sharpie.getColor() << " " << sharpie.getWidth() << std::endl;
    sharpie.use();
    std::cout << "Ink amount is: " << sharpie.getInkAmount() << std::endl;
    sharpie.use();
    std::cout << "Ink amount is: " << sharpie.getInkAmount() << std::endl;
}