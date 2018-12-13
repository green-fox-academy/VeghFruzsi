#include <stdio.h>
#include <stdlib.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

int main()
{
    int size;
    printf("Please give your matrix sixe: \n");
    scanf("%d", &size);
    printf("------------------------\n");

    printf("Give the numbers: \n");
    int * array = calloc(size, sizeof(int));

    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] > array[i])
            {
                int temp_something = array[i];
                array[i] = array[j];
                array[j] = temp_something;
            }
        }
    }

    for (int k = 0; k < size; ++k) {
        printf("%d ,", array[k]);
    }



    return 0;
}