#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each of lines form the file.
// You have to create the file, you can use C-programming but it is not mandatory

int main ()
{
    FILE *filepointer;
    char line[100];

    filepointer = fopen("../my-file.txt", "r");

    if (filepointer == NULL){
        printf("Can't open the file.\n");
        return -1;
    } else {
        while (!feof(filepointer)){
            fgets(line, 100, filepointer);
            printf("%s", line);
        }
        fclose(filepointer);
    }

    return 0;
}