#include <stdio.h>
#include <mem.h>

int main()
{
    // Create character program which asks for character string and stores it
    // Create character function which takes character string as character parameter and
    // appends character endChar 'character' to the end of it and returns the new string

    char string[100] = "Bettin";

    strcat(string, "a");
    printf("%s", string);

    return 0;
}