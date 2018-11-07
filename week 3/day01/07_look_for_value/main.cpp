#include <iostream>
#include <algorithm>

void printAll(int* array, int length);

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    int array[4] = { 10, 20, 30, 40 };
    int * p;

    p = std::find (array, array+4, 30);

    std::cout << p + 1 << std::endl;

    std::cout << array << std::endl;
    std::cout << *(array + 1) << std::endl;

    printAll(array, sizeof(array) / sizeof(array[0]));

    return 0;
}


void printAll(int *array, int length)
{
    for(int i = 0; i < length; ++i)
    {
        std::cout << *(array + i) << std::endl;
    }
}