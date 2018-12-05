#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the informations!
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87

    char name [100]= "";
    int age = 0;
    float height = 0;

    printf("What is your name?\n");
    scanf("%s", name);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("How tall are you?\n");
    scanf("%f", &height);

    printf("Wow! You are %s, %d years old and %.2f tall?", name, age, height);

    return 0;
}