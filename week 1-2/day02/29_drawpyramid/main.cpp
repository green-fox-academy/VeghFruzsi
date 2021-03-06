#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was


    int number, i, j, space = 1;
    std::cout << "Please give me a number: ";
    std::cin >> number;
    space = number - 1;

    for (i = 1; i <= number; i++) {
        for (j = 1; j <= space; j++)
            std::cout << " ";

        space--;

        for (j = 1; j <= 2 * i - 1; j++)
            std::cout << "*";

        std::cout << "\n";
    }

    return 0;
}