#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

int *array_with_order(int *matrix, int matrix_size);
int percentile (int *matrix, int percentile, int matrix_size);

int main()
{
    int size1 = 0;
    int size2 = 0;
    printf("Please give me your matrix 1. dimension: \n");
    scanf("%d", &size1);
    printf("Please give me your matrix 2. dimension: \n");
    scanf("%d", &size2);

    int matrix_size = size1 * size2;
    int *matrix = (int *) malloc(matrix_size * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < matrix_size; ++i) {
        matrix[i] = rand() % 1000 + 2;
    }

    int * ordered_matrix = array_with_order(matrix, matrix_size);
    for (int j = 0; j < matrix_size; ++j) {
        printf("%d ", ordered_matrix[j]);
    }
    printf("\n");

    printf("The %dth percentile is %d\n", 90, percentile(matrix, 90, matrix_size));
    printf("The %dth percentile is %d\n", 80, percentile(matrix, 80, matrix_size));

    free(matrix);
    free(ordered_matrix);
    return 0;
}

int *array_with_order(int *matrix, int matrix_size)
{
    for (int j = 0; j < matrix_size; ++j) {
        for (int k = 0; k < matrix_size; ++k) {
            if (matrix[k] > matrix[k+1]) {
                int ordered_matrix = matrix[k];
                matrix[k] = matrix[k+1];
                matrix[k+1] = ordered_matrix;
            }
        }
    }
    return matrix;
}

int percentile (int *matrix, int percentile, int matrix_size){
    int *ordered_array = array_with_order(matrix, matrix_size);
    int percentile_element = (int)((percentile / 100.0 ) * matrix_size);

    return ordered_array[percentile_element];
}
