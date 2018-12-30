#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"


int write_lines (char *path, char *word, int number);

int main()
{
    write_lines("../my-file.txt", "dududu", 72);
    return 0;
}

int write_lines (char *path, char *word, int number){
    FILE *fp;
    fp = fopen(path, "w");

    if (fp == NULL){
        printf("Can't open the file.");
        return -1;
    } else {
        for (int i = 0; i < number; ++i){
            fputs(word, fp);
            fputs("\n", fp);
        }
        printf("Write to file is done.");
    }
    fclose(fp);
}
