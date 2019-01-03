#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int size = 10;
    int *array = (int *) malloc(size * sizeof(int));

    for (int k = 0; k < size; ++k) {
        array[k] = k * 2;
        printf("%d ", array[k]);
    }

    realloc(array, 0);

    return 0;
}