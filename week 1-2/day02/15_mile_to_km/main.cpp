#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    int lengthInKm, lengthInMiles;

    std::cout << "Please, add a length of your trip in kilometers: " << std::endl;
    std::cin >> lengthInKm ;

    lengthInMiles = lengthInKm * 62 / 100;

    std::cout << "Your trip is: " << lengthInMiles << " in miles." << std::endl;

    return 0;
}

