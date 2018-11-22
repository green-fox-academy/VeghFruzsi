#include <iostream>

int main() {
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int *aPtr = nullptr;
    int *bPtr = nullptr;

    std::cout << "The value of a is " << a << std::endl;
    std::cout << "The value of b is " << b << std::endl;
    std::cout << "The memory address of a is " << &a << std::endl;
    std::cout << "The memory address of b is " << &b << std::endl;

    std::cout << "The value of aPtr is " << aPtr << std::endl;
    std::cout << "The value of bPtr is " << bPtr << std::endl;

    aPtr = &a;
    bPtr = &b;

    std::cout << "The value of aPtr is " << *aPtr << std::endl;
    std::cout << "The value of bPtr is " << *bPtr << std::endl;
    std::cout << "The sum of a + b is " << *aPtr + *bPtr << std::endl;

    return 0;
}
