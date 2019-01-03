#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int X = 0;
    printf("Please give me a number:\n ");
    scanf("%d", &X);

    int * array = malloc( X * sizeof(int));

    printf("Than give me numbers:\n ");

    //FILL
    for (int i = 0; i < X; i++){
        int temp_array = 0;
        scanf("%d", &temp_array);
        array[i] = temp_array;
    }

    //SUM
    int SUM = 0;
    for (int m = 0; m < X; ++m) {
        SUM += array[m];
    }
    printf("Sum of your numbers is: %d\n", SUM);

    printf("Your numbers is the array: ");
    array = realloc(array, SUM * sizeof(int));

    for (int n = 1; n <= SUM; ++n) {
        array[n-1] = n;
        printf("%d, ", array[n-1]);
    }

    free(array);

    return 0;
}