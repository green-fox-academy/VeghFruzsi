#include <stdio.h>

char primeNumbers(int number);


int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int a;
    printf("Please give a number: \n");
    scanf("%d", &a);

    primeNumbers(a);

    return 0;
}

char primeNumbers(int number)
{
    int oddNumber = 0;
    for (int i = 2; i <= number/ 2; ++i){
        if(number%i == 0){
            oddNumber = 1;
            break;
        }
    }

    if (number == 1) {
        printf("1 is neither a prime nor a composite number.");
    } else {
        if (oddNumber == 0){
            printf("%d is a prime number.", number);
        } else{
            printf("%d is not a prime number.", number);
        }
        return 0;
    }
}