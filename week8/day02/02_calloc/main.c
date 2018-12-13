#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size = 10;
    int *something = calloc(size, sizeof(int));

    for (int k = 0; k < 5 ; ++k) {
        int number;
        something[k] = number;
    }

    free(something);

    return 0;
}