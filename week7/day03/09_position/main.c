#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void all_i (char array[]);

int main ()
{
    char string[55] = "This is a string for testing";

    all_i(string);
    return 0;
}

void all_i (char array[]){
    int length = strlen(array);
    for (int i = 0; i < length; ++i){
        if ( array[i] == 'i'){
            printf("%d\n", i);
        }
    }
}
