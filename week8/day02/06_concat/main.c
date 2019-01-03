#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char* concrate_strings(char* string_1, char* string_2);

int main()
{
    char* a = "Chucky is the coolest ";
    char* b = "baby monster evaa!!!";

    char* c = "";
    char* d = "";

    char * end = concrate_strings(a, b);
    char * end_empty = concrate_strings(c, d);
    printf("With added strings: %s\n", end);
    printf("With empty strings: %s\n", end_empty);

    free(end);
    free(end_empty);

    return 0;
}

char* concrate_strings(char* string_1, char* string_2){
    char* result = malloc(strlen(string_1) + strlen(string_2) + 1);

    if (result == NULL){
        printf("Memory is not allocated.");
    } else {
        strcpy(result, string_1);
        strcat(result, string_2);

        if (strlen(result) == 0){
            return "This is an empty string.\n";
        }
    }
    return result;
}
