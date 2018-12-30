#include <stdio.h>
#include <stdlib.h>
#include "pi.h"

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that circle
// area = radius * radius * PI


int main()
{
    int radius = 3;

    printf("%.2f\n", circle_area(radius));
    printf("%.2f", circle_circumference(radius));

    return 0;
}

