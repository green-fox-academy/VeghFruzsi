#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
// printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main ()
{
    char data[200];
    char *first_name;
    char *last_name;
    int age = 0;

    puts("Please give me your full name and age with spaces.");
    gets(data);

    first_name = strtok(data, " ");
    last_name = strtok(NULL, " ");

    if (first_name == NULL || last_name == NULL){
        printf("You did not give a name.");
    } else {
        age = strtol (strtok(NULL, " "), (char **) NULL, 10);

        if (age < 0 || age > 110){
            printf("You are still not exist or you are a vampire.");
        } else {
            printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);
        }
    }

    return 0;
}