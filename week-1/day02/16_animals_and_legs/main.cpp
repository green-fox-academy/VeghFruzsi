#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int numberOfChicken, numberOfPigs, sumOfLegs;

    std::cout << "Please write, how many chickens do you have?" << std::endl;
    std::cin >> numberOfChicken;

    std::cout << "Please write, how many pigs do you have?" << std::endl;
    std::cin >> numberOfPigs;

    sumOfLegs = (numberOfChicken * 2) + (numberOfPigs * 4);

    std::cout << "They have together " << sumOfLegs << " legs." << std::endl;



    return 0;
}