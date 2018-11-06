#include <iostream>

int main(int argc, char const *argv[])
{
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87
    std::string name = "Fruzsi";

    int bornYear = 1988;
    int actYear = 2018;

    float height = 160;

    std::cout << "Hello my name is " << name << "." << std::endl;
    std::cout << "I'm " << actYear - bornYear << " years old." << std::endl;
    std::cout << "I'm " << height << " cm tall." << std::endl;



    return 0;
}