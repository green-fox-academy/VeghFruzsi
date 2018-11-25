#include <iostream>

int main() {
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int numbers[5];
    std::cout << "Please give 5 numbers" << std::endl;
    std::cin >> numbers [0];
    std::cin >> numbers [1];
    std::cin >> numbers [2];
    std::cin >> numbers [3];
    std::cin >> numbers [4];


    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        std::cout  << "The memory address is " << &numbers[i]  << std::endl;
    }

    return 0;
}
