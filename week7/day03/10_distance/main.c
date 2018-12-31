#include <stdio.h>
#include <string.h>
#include <ctype.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

void distance (char array[]);

int main ()
{
    char str[] = "This is a sample string";
    char *first, *last;

    distance(str);


    return 0;
}

void distance (char array[]){

    for (int i = 0; i < strlen(array) ; ++i) {
        array[i] = (char) tolower(array[i]);
    }

    char *first = 0, *last = 0;
    char ch = 'b';

    for (int j = 0; j < strlen(array); ++j) {
        if (array[j] == ch){
            first = (char *) j;
        } else {
            first = (char *) - 1; // anything, just more elegant
        }
    }

    for (int k = 0; k < strlen(array); ++k) {
        if (array[k] == ch){
            last = (char *) k;
        }
    }

    if ( first == (char *) -1){
        printf("The given character, %c is not in the string.\n", ch);
    } else {
        printf("Distance between the first and the last occurrence of %c is %d.\n", ch, (int) (last - first - 1));
    }
}

