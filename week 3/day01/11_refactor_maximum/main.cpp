#include <iostream>

void arrayLength(int &number);

void arrayFill(int *array, int length);

void findMaximum(int *array, int length, int &max, int * maxPtr);

int main() {
    // Refactor time!
    // use your 'refactor_maximum.cpp',
    // solve the same exercise by creating a separate function
    // for each functionality

    int lengthOfA;
    int arrayFull[1000];
    int max;
    int * maxPoint;

    arrayLength(lengthOfA);
    arrayFill(arrayFull, lengthOfA);
    findMaximum(arrayFull, lengthOfA, max, maxPoint);

    std::cout << "The array lenght: " << lengthOfA << ",\n max is: " << max << ",\n max memory address is: " << maxPoint << std::endl;


}

void arrayLength(int &number) {
    std::cout << " Please give me the length of the array: " << std::endl;
    std::cin >> number;
}

void arrayFill(int *array, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << "Please give me a number: " << std::endl;
        std::cin >> array[i];

    }
}

void findMaximum(int *array, int length, int &max, int * maxPtr) {
    for (int i = 0; i < length; ++i) {
        max = array[0];
        if (array[i] > max) {
            max = array[i];
            maxPtr = array + i;
        }
    }
}