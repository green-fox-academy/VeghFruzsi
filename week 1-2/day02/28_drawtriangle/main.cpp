#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    int x;
    std::string star = "";
    std::cout << "Give me a number please!" << std::endl;
    std::cin >> x ;

    for (int i = 0; i <= x ; i++) {
        star += "*";
        std::cout << star << std::endl;
    }

    return 0;
}
