#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int number1 = 0;
    int number2 = 0;

    std::cout << "Please write 2 number." << std::endl;
    std::cin >> number1;
    std::cin >> number2;

    if ( number1 > number2){
        std::cout << " The bigger number is " << number1 << std::endl;
    } else {
        std::cout << " The bigger number is " << number2 << std::endl;
    }

    return 0;
}