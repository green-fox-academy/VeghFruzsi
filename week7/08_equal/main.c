#include <stdio.h>

int equal (int a, int b);


int main()
{
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
// returns 1 if they are equal and returns 0 otherwise

    int a;
    int b;
    printf("Give me a numbers: \n");
    scanf("%d", &a);

    printf("Give me an another numbers: \n");
    scanf("%d", &b);

    printf("%d", equal (a, b));

    return 0;
}

int equal (int a, int b)
{
    if (a == b) {
        return 1;
    } else {
        return 0;
    }
}