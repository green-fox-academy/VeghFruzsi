#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits


int main()
{
    int number = 5;
    int * array = malloc(number * sizeof(int));

    for (int i = 0; i < number; ++i) {
        int x;
        array[i] = x;
    }

    free(array);

    return 0;
}