#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.
char *strings_counter(char *string, int counter);

int main()
{
    int number;
    printf("Please, give me a number: \n");
    scanf("%d", &number);

    char *word = calloc((strlen(word) + 1), sizeof(char));
    printf("Please, give me a word: \n");
    scanf("%s", word);

    char * end = strings_counter(word, number);
    printf("%s\n", end);

    return 0;
}

char *strings_counter(char *string, int counter)
{
    char *result = calloc((strlen(string) * counter + 1), sizeof(char));
    for (int i = 0; i < counter; ++i) {
        strcat(result, string);
    }
    return result;
}