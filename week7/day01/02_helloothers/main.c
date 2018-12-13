#include <stdio.h>

int main()
{
    // Greet 3 of your classmates with this program, in three separate lines
    // like:
    //
    // Hello, Esther!
    // Hello, Mary!
    // Hello, Joe!
    char *name = "Esther";
    char *name2 = "Mary";
    char *name3 = "Joe";

    printf("Hello, %s!\n", name);
    printf("Hello, %s!\n", name2);
    printf("Hello, %s!\n", name3);
    return 0;
}