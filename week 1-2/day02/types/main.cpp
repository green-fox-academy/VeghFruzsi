#include <iostream>

int main(int argc, char const *argv[]) {

    // Prints a string to the terminal window.
    // std::cout << "Hello, World!" << std::endl;
    std::string greeting = "Hello,";
    std::string name = " World!";
    std::cout << greeting;
    std::cout << name << std::endl;


    // Prints an integer to the terminal window.
    //std::cout << 42 << std::endl;
    int a = 6;
    int b = 7;
    int c = a * b;

    std::cout << c << std::endl;

    // Prints a floating point number to the terminal window.
    //std::cout << 3.1415 << std:endl;
    int d = 13;
    int e = 27;

    std::cout << (float)d / 27 << std::endl;
    std::cout << d % e << std::endl;

    return 0;
}