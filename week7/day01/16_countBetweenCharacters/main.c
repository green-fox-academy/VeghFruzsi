#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_between_chars(char *a);

int main()
{
    // Create a function which takes a string as a parameter and 
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter

    char word[100] = "Programming";

    // the output should be: 6 (in this case the repeating char was 'g')
    printf("%d", count_between_chars(word));

    return 0;
}

int count_between_chars(char *a)
{
    int i = 0;
    int distance = 0;
    while (a[i] != '\0') {
        int j = i;

        while (a[j] != '\0') {
            if (a[j] == a[i] &&((j - i) > distance)) {
                distance = (j - i);
            }
            j++;
        }
        i++;
    }
    return distance -1;
}