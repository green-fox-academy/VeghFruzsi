#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that prints all the even numbers between 0 and 500


    for ( int a = 0; a < 501 ; a++ ){
        if ( a % 2 ==0 ) {
            std::cout << a << std::endl;
        }
    }

    return 0;
}
