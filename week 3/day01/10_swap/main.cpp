#include <iostream>

void swap(int *a, int *b);

int main() {
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    swap(&a, &b);

    std::cout << "a is " << a << " and b is " << b << std::endl;
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}