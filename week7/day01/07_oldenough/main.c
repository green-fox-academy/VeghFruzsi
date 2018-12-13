#include <stdio.h>

void areYouOldEnough (int age);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age;
    printf("Please, give your age: \n");
    scanf("%d", &age);

    areYouOldEnough(age);

    return 0;
}

void areYouOldEnough (int age){
    if (age >= 18){
        printf("You can buy yourself alcohol in Hungary.");
    }else{
        printf("You are too young.");
    }
}