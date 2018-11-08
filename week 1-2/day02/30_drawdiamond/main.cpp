#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was

    int number, i, j, space = 1;
    std::cout << "Please give me a number: " std::endl;
    std::cin >> number;
    space = number - 1;

    for (i = 1; i <= number; i++) {
        for (j = 1; j <= space; j++)
            std::cout << " ";

        space--;

        for (j = 1; j <= 2 * i - 1; j++)
            std::cout << "*";

        std::cout<<"\n";
    }

    space = 1;

    for (i = 1; i <= number - 1; i++) {
        for (j = 1; j <= space; j++)
            std::cout << " ";

        space++;

        for (j = 1; j <= 2 * (number - i) - 1; j++)
            std::cout << "*";

        std::cout << "\n";
    }
    return 0;
}