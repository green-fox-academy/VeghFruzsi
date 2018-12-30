#include <string.h>
#include <stdio.h>

enum transmission_type{
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH };

typedef struct{
    char brand[256];
    float price;
    int year;
    enum transmission_type trans;
} car;

int get_older_cars_than(car* array, int array_length, int age);
int get_transmission_count(car* array, int array_length, enum transmission_type trnsm);


int main()
{
    car c1;
    car c2;
    car c3;
    car cars[] = {c1, c2, c3};

    int array_length = sizeof(cars) / sizeof(cars[0]);
    int age = 20;
    printf("There are %d older car then %d.\n", get_older_cars_than(cars, array_length, age), age);

    enum transmission_type trnsm = CVT;
    printf("There are %d with CVT transmission type.", get_transmission_count(cars, array_length, trnsm));
    return 0;
}

int get_older_cars_than(car* array, int array_length, int age){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if(array->year > age){
            counter ++;
        }
    }
    return counter;
}

int get_transmission_count(car* array, int array_length, enum transmission_type trnsm){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if(array[i].trans == trnsm){
            counter ++;
        }
    }
    return counter;
}
