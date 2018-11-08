#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int x;
    std::cout << "Please give me a number: " << std::endl;
    std::cin >> x ;

    for (int i=0; i < x; i++){
        if(i%2 == 0){
            std::cout << i << " is an even number." << std::endl;
        }else{
            std::cout << i << " is and odd number." << std::endl;
        }
    }
    return 0;
}