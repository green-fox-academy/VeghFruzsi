#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int x;
    printf("Please give me a number:\n ");
    scanf("%d", &x);

    int *array = malloc(x * sizeof(int));

    printf("Please give me numbers:\n ");

    for (int i = 0; i < x; ++i) {
        int fill_array = 0;
        scanf("%d", &fill_array);
        array[i] = fill_array;
    }

    int sum = 0;
    for (int j = 0; j < x; ++j) {
        sum += array[j];
    }
    printf("The sum of your numbers: %d\n", sum);

    printf("Please fill your array: \n", sum);
    for (int k = x; k < sum; ++k) {
        int fill_array = 0;
        scanf("%d", &fill_array);
        array[k] = fill_array;
    }

    printf("Your numbers in the array: \n", sum);
    for (int l = 0; l < sum; ++l) {
        printf("%d, ", array[l]);
    }

    return 0;
}