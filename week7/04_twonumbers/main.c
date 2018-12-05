#include <stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13
    // Store the results in variables and use them when you display the result

    // Print the result of 13 added to 22
    int x = 13;
    int y = 22;
    int sum;
    sum = x + y;
    printf("%d\n", sum);

    // Print the result of 13 substracted from 22
    int subr;
    subr = y - x;
    printf("%d\n", subr);

    // Print the result of 22 multiplied by 13
    int multip;
    multip = x * y;
    printf("%d\n", multip);

    // Print the result of 22 divided by 13 (as a decimal fraction)
    float divided;
    divided = (float) y / (float) x;
    printf("%.2f\n", divided);
    // Print the reminder of 22 divided by 13
    int divided2;
    divided2 = y / x;
    printf("%d\n", divided2);

    return 0;
}