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
    int m_size = 20;
    int *new_array = calloc(m_size, sizeof(int));

    int *array1 = calloc(size, sizeof(int));
    int *array2 = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        array1[i] = 2 * i;
        array2[i] = 2 * i - 1;
    }

    int i = 0;
    int j, k = 0;
    for (k = 0; k < 20; k++) {

        if (array1[i] < array2[j]) {
            new_array[k] = array1[i];
            i++;
        } else {
            new_array[k] = array2[j];
            j++;
        }
    }
    while (i < size) {
        new_array[k] = array1[i];
        k++;
        i++;
    }

    while (j < size) {
        new_array[k] = array2[j];
        k++;
        j++;
    }

    printf("\n a[%d] Array Elements After Merging \n", m_size);
    for (i = 0; i < m_size; i++) {
        printf(" %d, ", new_array[i]);
    }

    return 0;
}