#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_substring( char* a, char* b);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the shorter string is a substring of the longer one and
    // returns 0 otherwise
    // If the two strings has the same lenght than the function should return -1

    char a_string[100]= "";
    char b_string[100]= "";

    printf("Give me please a string: \n");
    gets(a_string);
    printf("Give me please another string: \n");
    gets(b_string);

    printf("%d\n", is_substring(a_string, b_string));

    return 0;
}

int is_substring( char* a, char* b){
    char* short_one = b;
    char* long_one = a;
    if (strlen(a) < strlen(b)){
        short_one = a;
        long_one = b;
    } else if (strlen(a) == strlen(b)){
        return -1;
    }

    if(strstr(long_one, short_one) != NULL){
        return 1;
    }else{
        return 0;
    }
}
