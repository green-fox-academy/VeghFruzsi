#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char concrate_strings(char a, char b);

int main()
{
    char result[100];

    strcpy(result, "Chucky");
    strcat(result, " is the");
    strcat(result, " cutest monster!");

    printf("The result is: %s", result);

    return 0;
}