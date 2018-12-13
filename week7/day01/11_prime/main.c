#include <stdio.h>

int primeNumbers(int number);


int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
// (in this case 0 is not considered as a prime number)

    int a;
    printf("Please give a number: ");
    scanf("%d", &a);

    primeNumbers(a);


    return 0;
}

int primeNumbers(int number)
{
    if (number % number == 0 && number % 1 == 0) {
        return 1;
    } else {
        return 0;
    }
}