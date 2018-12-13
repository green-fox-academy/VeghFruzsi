#include <stdio.h>

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char string [] = "Bettin";
    char character = "/0";
    char a = "a";


    for(int i = 0; string[i] != '\0'; ++i)
    {

        if(character == string[i]){
            string[i] = string[i] + a;
        }

    }

    printf("%s", string[i]);


    return 0;
}