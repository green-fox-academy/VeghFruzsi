#include <iostream>

#include "sharpie.h"

int main() {


    Sharpie sharpie("blue", 7.4);

    std::cout << "Ink amount is: " << sharpie.getInkAmount() << ", color is: " << sharpie.getColor() << ", width is: " << sharpie.getWidth() << std::endl;
    sharpie.use();
    std::cout << "Ink amount is: " << sharpie.getInkAmount() << std::endl;
    sharpie.use();
    std::cout << "Ink amount is: " << sharpie.getInkAmount() << std::endl;
    sharpie.fill();
    std::cout << "Ink amount is: " << sharpie.getInkAmount() << std::endl;
}