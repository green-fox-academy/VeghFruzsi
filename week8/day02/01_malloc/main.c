#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits


int main()
{
    int size = 10;
    int *array;
    array = (int *) malloc( size * sizeof(int));
    int x = 0;

    for (int j = 0; j < 5; ++j) {
        array[j] = x;
        x++;
        printf("%d ", array[j]);
    }

    free(array);

    return 0;
}