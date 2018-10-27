
#include <iostream>


    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

int main(int argc, char* args[]) {

    double l, w, h, area, volume;

    std::cout << "Please, enter the lenght:"  << std::endl;
    std::cin >> l ;

    std::cout << "Please, enter the width:"  << std::endl;
    std::cin >> w ;

    std::cout << "Please, enter the height:"  << std::endl;
    std::cin >> h ;

    volume = (l * w * h) ;

    area = 2 * ((l * w) + (w * h) + (l * h));

    std::cout << "Cuboid's volume is: " << volume << std::endl;
    std::cout << "Cuboid's area is: " << area << std::endl;


return 0;
}