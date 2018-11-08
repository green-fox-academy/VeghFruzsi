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

    int x = 0;
    std::string space = "";
    std::string star = "";

    std::cout << "Please give me a number:" << std::endl;
    std::cin >> x;

    for (int i =0; i < (x * 2); i++){
        if ( i % 2 != 0) {
            star += "*";
            std::cout << star << std::endl;

        }
    }


    return 0;
}
