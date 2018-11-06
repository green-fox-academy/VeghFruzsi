#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    std::cout << "The address of number is " << &a << std::endl;
    std::cout << "The address of number is " << &b << std::endl;
    std::cout << "The address of number is " << &name << std::endl;


    std::cout << "The value of ptr is " << a << std::endl;
    std::cout << "The value of ptr is "  << b << std::endl;
    std::cout << "The value of ptr is " << name << std::endl;

    return 0;
}
