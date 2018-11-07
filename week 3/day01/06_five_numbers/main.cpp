#include <iostream>


int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int numberPtr(int *x);
    int numbers[5];

    std::cout << "Please give me 5 numbers: " << std::endl;

    for (int i=0; i < 5; i++) {
        std::cout << i+1 << std::endl;
        std::cin >> numbers[i];
    }

    for (int i =0; i < 5; i++) {
        std::cout << numberPtr(&numbers[i]) << std::endl;
        }

        return 0;
    }


    /*int numberPtr(int *x) {
     int a;
     a = *x;
     return a;*/

}
