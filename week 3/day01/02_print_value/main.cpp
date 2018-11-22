#include <iostream>

int main() {
    // Print out the value of the variable called 'age' using a pointer
    // (you have to create the pointer first)

    int age = 31;
    int *agePtr = nullptr;

    std::cout << "The value of age is " << age << std::endl;
    std::cout << "The memory address of age is " << &age << std::endl;
    std::cout << "The value of agePtr is " << agePtr << std::endl;

    agePtr = &age;

    std::cout << "The value of age is " << age << std::endl;
    std::cout << "The memory address of age is " << &age << std::endl;
    std::cout << "The memory address of agePtr is " << agePtr << std::endl;
    std::cout << "The value address of agePtr is " << *agePtr << std::endl;

    return 0;
}
