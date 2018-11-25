#include <iostream>


int *findMin(int *numbers, int length);

int main() {
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "The smallest number is " << *findMin(numbers, length ) << std::endl;
    return 0;
}

int *findMin(int *numbers, int length){
    int minimum = numbers[0];
    int *minPtr;
    for (int i = 0; i < length; ++i) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];
            minPtr = &numbers[i];
        }
    }
    return minPtr;
}