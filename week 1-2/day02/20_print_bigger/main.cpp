#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int x;
    int y;
    std::cout << "Please give me 2 numbers:" << std::endl;
    std::cin >> x;
    std::cin >> y;

    if(x > y){
        std::cout << x << " is bigger than " << y << std::endl;
    } else {
        std::cout << y << " is bigger than " << x << std::endl;
    }
    return 0;
}

