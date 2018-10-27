#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    for (int i = 0; i < 27; i++){
        if (i % 2 ==0){
            std::cout << i << " is even." << std::endl;
        } else {
            std::cout << i << " is odd." << std::endl;
        }
    }
    return 0;
}