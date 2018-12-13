#include <stdio.h>

int whichIsBigger(int a, int b);


int main()
{
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int a, b;

    printf("Give me a number, please: \n");
    scanf("%d", &a);

    printf("Give me an another, please: \n");
    scanf("%d", &b);

    printf(whichIsBigger(a, b));


    return 0;
}

int whichIsBigger(int a, int b)
{
    int sumA = 0, sumB = 0, number;


    while (a != 0) {
        number = a % 10;
        sumA = sumA + number;
        a = a / 10;
    }

    while (b != 0) {
        number = b % 10;
        sumB = sumB + number;
        b = b / 10;
    }

    if (sumA == sumB) {
        printf("1");
    } else {
        printf("0");
    }
}