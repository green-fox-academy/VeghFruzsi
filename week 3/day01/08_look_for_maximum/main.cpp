#include <iostream>

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int x;
    std::cout << "How big array do you want? Give me please a number: " << std::endl;
    std::cin >> x;

    int *myArray;
    myArray = new int[x];

    int max = 0;
    int *maxPtr;
    for (int i = 0; i < x; ++i) {
        std::cout << "Please give me the " << i + 1 << ". number: " << std::endl;
        std::cin >> myArray[i];
        if (myArray[i] > max) {
            max = myArray[i];
            maxPtr = &myArray[i];
        }
    }
    std::cout << "The biggest number is " << max << " and its memory address is: " << maxPtr;

    return 0;
}
