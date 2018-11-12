#include <iostream>
#include <string>

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0


    try {
        int x = 20;
        int y = 0;

        if (y == 0) {
            throw -72;
        }
        std::cout << x / y << std::endl;
        } catch (int e) {
        std::cout << "ERROR: " << e << "\n" << "You can't divide by 0" << std::endl;
    }

    return 0;
}
