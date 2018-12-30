#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int number_lines (char *filename);

int main ()
{
    printf("%d", number_lines("../my-file.txt"));

    return 0;
}

int number_lines (char *filename){
    FILE *filepointer;
    filepointer = fopen(filename, "r");

    int counter = 0;

    if(filepointer == NULL){
        printf("Can't open the file.\n");
        return -1;
    } else {
        char line[100];
        while (!feof(filepointer)){
            fgets(line, 100, filepointer);
                counter++;
        }
    }
    return counter;
}
