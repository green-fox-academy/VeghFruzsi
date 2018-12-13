#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

char isThisSame (char a, char b);


int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char * name = "Susie";
    char * name2 = "Dennis";

    if(!strcmp(name, name2)){
        printf("1\n");
    }else{
        printf("0");
    }

        return 0;
}

