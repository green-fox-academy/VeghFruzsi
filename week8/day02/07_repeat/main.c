#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char* strings_counter(char* string, int number);

int main()
{
    int number = 0;
    printf("Please, give me a number: \n");
    scanf("%d", &number);

    char* word = calloc((strlen(word) + 1), sizeof(char));
    printf("Please, give me a word: \n");
    scanf("%s", word);

    char* repeated_string = strings_counter(word, number);
    printf("%s\n", repeated_string);

    free(word);
    free(repeated_string);
}

char* strings_counter(char* string, int number){
    char* result = calloc((strlen(string) * number), sizeof(char));

    for (int i = 0; i < number; ++i) {
        strcat(result, string);
    }

    return result;
}
