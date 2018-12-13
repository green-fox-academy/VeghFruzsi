#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{

    int size = 10;
    int* array = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        array[i] = 2 * i;
    }

    for (int j = 0; j < size; ++j) {
        printf(" %d\n", array[j]);
    }

    realloc(array, 0);

    return 0;
}