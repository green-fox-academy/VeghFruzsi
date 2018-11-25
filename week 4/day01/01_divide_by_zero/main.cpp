#include <iostream>
#include <string>


void dividedNumber(float numb);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    float result;
    dividedNumber(result);

    return 0;
}

void dividedNumber(float numb) {
    try {
        std::cout << "Please give me a number: " << std::endl;
        std::cin >> numb;
        if (numb == 0) {
            throw -1;
        }
        std::cout << numb / 10 << std::endl;
    } catch (int e) {
        std::cout << "Can' divide by 0 - ERROR 72"<< std::endl;
    }
}