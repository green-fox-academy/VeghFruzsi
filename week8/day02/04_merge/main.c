#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int size = 10;
    int *array_even = calloc( size, sizeof(int));
    int *array_odd = calloc( size, sizeof(int));

    int new_size = 20;
    int *new_array = calloc( new_size , sizeof(int));

    for (int l = 0; l < size; ++l) {
        array_even[l] = 2 * l;
        array_odd[l] = (2 * l) - 1;
    }

    int i = 0, j = 0, k = 0;
    for (; i < new_size; ++i) {

        if (array_even[j] < array_odd[k]) {
            new_array[i] = array_even[j];
            j++;
        } else {
            new_array[i] = array_odd[k];
            k++;
        }
    }

     while (i < size) {
         new_array[k] = array_even[i];
         k++;
         i++;
     }

     while (j < size) {
         new_array[k] = array_odd[j];
         k++;
         j++;
     }

     printf("Array Elements After Merging: \n");
     for (i = new_size-1 ; i >= 0; i--) {
         printf(" %d, ", new_array[i]);
     }

     free(array_even);
     free(array_odd);
     free(new_array);
    return 0;
}