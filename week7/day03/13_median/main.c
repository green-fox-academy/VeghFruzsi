#include <stdio.h>
#include <mem.h>
#include <stdlib.h>

// Every line contains the name of the group and after a colon, the height of people in the group separated by commas
// Find the group where the median is the lowest.
// Note that the groups do not necessarily contain the same amount of people

typedef struct heights {
    char name[100];
    int size;
    int height[100];
} heights_t;

int read_from_file (heights_t * array, char *filename);
//void sort (heights_t *array);
char *median (heights_t *array);

int main()
{
    heights_t array[15];
    read_from_file(array, "../median.txt");
    //sort(array);
    printf("%s", median(array));

    return 0;
}

int read_from_file (heights_t * array, char *filename){

    char line[100];
    int i = 0;
    int j = 0;
    int counter = 0;

    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Can't open the file!\n");
        return -1;
    } else {
        while (fgets(line, sizeof(line), fp) != NULL){
            char *data = strtok(line, ":");
            strcpy(array[i].name, data);

            while (data != NULL) {
                data = strtok(NULL, ",");
                if (strtol(data, NULL, 10) != 0){
                    array[i].height[j] = strtol(data, NULL, 10);
                }
                j++;
                counter++;
            }
            array[i].size = counter - 1;
            i++;
            j = 0;
            counter = 0;
        }
    }
    fclose(fp);
}

/*void sort (heights_t *array){
    int temp_arr = 0;

    for (int i = 0; i < array[i].size ; ++i) {
        for (int j = 0; j < array[j].size; ++j) {
            for (int k = 0; k < array[k].size; ++k) {
                if (array[i].height[k] > array[i].height[j]){
                    temp_arr = array[i].height[j];
                    array[i].height[j] = array[i].height[k];
                    array[i].height[k] = temp_arr;
                }
            }
        }
    }
}*/

char *median (heights_t *array){

    int even = 0;
    int odd = 0;
    int index = 0;
    int min = even;

    for (int i = 0; i < 4; ++i) {
        if (array[i].size % 2 == 0){
            even = array[i].height[array[i].size / 2 - 1];
            index = i;
        } else {
            odd = array[i].height[array[i].size / 2];
            index = i;
        }
        if (odd < min) {
            min = odd;
        } else {
            min = even;
        }
    }
    return array[index].name;
}
