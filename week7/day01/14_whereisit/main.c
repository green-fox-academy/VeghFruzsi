#include <stdio.h>
#include <mem.h>

int main()
{
    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"
//


    char string[] = "embedded";
    char *character;
    printf("Looking for the 'd' character in \"%s\"...\n", string);
    character = strchr(string, 'd');

    while (character != NULL) {
        printf("found at %d\n", character - string + 1);
        character = strchr(character + 1, 'd');
    }

    return 0;
}