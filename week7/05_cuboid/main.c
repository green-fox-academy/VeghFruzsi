#include <stdio.h>

int main()
{
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double a;
    double b;
    double c;

    printf("What is the a?\n");
    scanf("%lf", &a);
    printf("What is the b?\n");
    scanf("%lf", &b);
    printf("What is the c?\n");
    scanf("%lf", &c);

    double surface = 2 * (a*b + a*c + b*c);
    double volume = a * b * c;

    printf("The cuboid surface is: %.lf, and the volume is: %.lf.\n", surface, volume);
    return 0;
}