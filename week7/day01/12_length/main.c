#include <stdio.h>
#include <mem.h>
#include <string.h>

int main()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    char *name;
    printf("What is your name? \n");
    scanf("%s", &name);

    printf("Your name's length is : %d ", strlen(&name));

    return 0;
}