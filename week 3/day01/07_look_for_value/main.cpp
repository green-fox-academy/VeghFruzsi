#include <iostream>
#include <algorithm>

int printAll(int *myArray, int length, int value);

int main() {
    // Create a function which takes an myArray (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    int myArray[4] = {10, 20, 30, 40};

    std::cout << printAll(myArray, sizeof(myArray) / sizeof(myArray[0]), 25);

    return 0;
}

int printAll(int *myArray, int length, int value) {
    for (int i = 0; i < length; ++i) {
        if (*(myArray + i) == value)
            return i;
    }
    return 0;
}