#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int i;
    std::cout << "Please give 5 numbers" << std::endl;
    std:: cin >> i ;
    std:: cin >> i ;
    std:: cin >> i ;
    std:: cin >> i ;
    std:: cin >> i ;

    int numbers [i];

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        std::cout << "memory address is " << numbers + i << std::endl;
    }

    return 0;
}
