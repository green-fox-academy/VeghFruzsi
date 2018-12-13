#include <stdio.h>

int oddOrEven (int a);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int a;
    printf("Give me a numbers: \n");
    scanf("%d", &a);

    printf("%d", oddOrEven (a));

    return 0;
}

int oddOrEven (int a)
{
    if (a % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}