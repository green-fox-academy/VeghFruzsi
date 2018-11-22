#include <iostream>
#include <string>

int main() {
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers


    int a = 31;
    int *aPtr = &a;
    std::cout << "The address of number is " << &aPtr << std::endl;
    std::cout << "The value of ptr is " << *aPtr << std::endl;


    double b = 432.2;
    double *bPtr = &b;
    std::cout << "The address of number is " << &bPtr << std::endl;
    std::cout << "The value of ptr is " << *bPtr << std::endl;


    std::string name = "Bob";
    std::string *namePtr = &name;
    std::cout << "The address of number is " << &namePtr << std::endl;
    std::cout << "The value of ptr is " << *namePtr << std::endl;

    return 0;
}
