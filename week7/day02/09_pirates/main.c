#include <stdio.h>

/*
Create a struct that represents a pirate
It should store:
 - name
 - an int value which tells us if he/she has a wooden leg?
 - gold count
Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
Create a function that takes an array of pirates (and it's length) then returns the name of the
richest that has wooden leg
*/

typedef struct {
    char *name;
    int has_wooden_leg;
    short int gold_count;
} Pirate;

int sum_of_golds_from_all (Pirate *pirates, int array_length);
float average_gold_pro_person (Pirate *pirates, int array_length);
char* richest_with_wooden_leg (Pirate *pirates, int array_length);

int main()
{
    Pirate pirate;
    pirate.name = "Lip";
    pirate.has_wooden_leg = 1;
    pirate.gold_count = 900;

    Pirate pirate1;
    pirate1.name = "Antonio";
    pirate1.has_wooden_leg = 1;
    pirate1.gold_count = 200;

    Pirate pirate2;
    pirate2.name = "Carl";
    pirate2.has_wooden_leg = 0;
    pirate2.gold_count = 500;

    Pirate pirate3;
    pirate3.name = "Giselle";
    pirate3.has_wooden_leg = 1;
    pirate3.gold_count = 800;

    Pirate pirates[] = {pirate, pirate1, pirate2, pirate3};
    int array_length = sizeof(pirates) / sizeof(pirates[0]);
    printf("total of golds: %d\n", sum_of_golds_from_all(pirates, array_length));

    printf("average of golds: %.f\n", average_gold_pro_person(pirates, array_length));

    printf("richest with wooden leg: %s\n", richest_with_wooden_leg(pirates,array_length));

    return 0;
}

int sum_of_golds_from_all (Pirate *pirates, int array_length){
    int gold_total = 0;
    for (int i = 0; i < array_length; ++i) {
        gold_total += (pirates[i].gold_count);
    }
    return gold_total;
}

float average_gold_pro_person (Pirate *pirates, int array_length){
    return (float)(sum_of_golds_from_all(pirates, array_length) / array_length);
}

char* richest_with_wooden_leg (Pirate *pirates, int array_length){
    int richest_index = 0;
    for (int i = 0; i < array_length ; ++i) {
        if (pirates[i].gold_count > pirates[richest_index].gold_count && pirates[i].has_wooden_leg == 1){
            richest_index = i;
        }
    }
    return pirates[richest_index].name;
}