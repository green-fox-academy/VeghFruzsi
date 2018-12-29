#include <stdio.h>

int main()
{
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stored number is lower
    // You found the number: 8

    int number = 8;
    int guess;

    printf("What is my number?\n");

    do {
        scanf("%d", &guess);

        if (guess > number) {
            printf("High!\n");
        } else if (guess < number) {
            printf("Low!\n");
        } else {
            printf("You win!");
        }
    } while (guess != number);

    return 0;
}