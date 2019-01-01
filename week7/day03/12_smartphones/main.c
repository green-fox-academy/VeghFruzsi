#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

/* Read the content of smartphones.txt and store the informations in a structure called "smartphone:
 * - the name of the gadget (which is shorter than 256 characters) (Don't bother with the underscore('_') character, it's the part of the name)
 * - the year of the release (e.g. 2016)
 * - the type of the screen size (as a custom type, see below)
 *
 * In the file the size is given in cm but you should store the screen size type in an enumeration ("screen_size"),
 * the valid types are:
 *  - BIG -> (>= 15 cm)
 *  - MEDIUM -> (>= 12 cm)
 *  - SMALL -> (< 12 cm)
 *
 * The smartphones should be stored in an array.
 *
 * Implement the following functions:
 * - get_oldest_phone()
 *    - it should return the name of oldest device
 *    - it is up to you how your function declaration looks like (return type and arguments)
 * - get_screen_size_count()
 *    - it returns the count of phones which has "screen_size" size
 *    - it is up to you how your function declaration looks like (return type and arguments)
 *
 * Your main function should invoke these functions and print the following:
 * The ..... is the oldest device in the database
 * There are .... phones with BIG (>= 15 cm) screen size
 * There are .... phones with SMALL (< 12 cm) screen size
 *
 *
 * Additionally, you need to create a new file(prices.txt) that looks like this:
 * <NAME> <PRICE>
 * <NAME> <PRICE>
 * .
 * .
 * .
 *
 * To calculate the price use the following method. The base price of every phone is 300$.
 * If the size is SMALL, that adds 0$ to the value
 * If the size is MEDIUM, that adds 100$ to the value
 * If the size is BIG, that doubles the base price.
 *
 * The price also depends on the age. For every year that passed since its release,
 * the phone loses 50$ but the maximum value that it can lose because of the age is 250$
 */

typedef enum type
{
    BIG = 15,
    MEDIUM = 12,
    SMALL = 11
} type_t;

typedef struct smartphone
{
    char name[256];
    int year;
    type_t type;
} smartphone_t;

char *get_type(type_t type);

int read_from_file(smartphone_t array[], char *filename);

void get_oldest_phone(smartphone_t array[], int size);

int get_screen_size_count(smartphone_t array[], int size, const char *given_screen_size);

int get_prices(smartphone_t array[], char *filename, int size);

int main()
{
    smartphone_t array[100];
    int size = read_from_file(array, "../phones.txt");

    get_oldest_phone(array, size); // should be Samsung_Galaxy_Ace

    char *type = "BIG";
    printf("There are %d phones with BIG (>= 15 cm) screen size.\n",
           get_screen_size_count(array, size, type)); // should be 4

    char *type2 = "SMALL";
    printf("There are %d phones with SMALL (< 12 cm) screen size.\n",
           get_screen_size_count(array, size, type2)); // should be 4

    get_prices(array, "../prices.txt", size);

    return 0;
}

char *get_type(type_t type)
{
    switch (type) {
        case BIG:
            return "BIG";
        case MEDIUM:
            return "MEDIUM";
        case SMALL:
            return "SMALL";
    }
}

int read_from_file(smartphone_t array[], char *filename)
{

    FILE *fp;
    fp = fopen(filename, "r");
    char line[100];
    int counter = 0;
    int i = 0;

    if (fp == NULL) {
        printf(" Can't open the data file.\n");
        return -1;
    } else {
        while (fgets(line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, " ");
            while (data != NULL) {
                counter++;
                if (counter == 1) {
                    strcpy(array[i].name, data);
                } else if (counter == 2) {
                    array[i].year = strtol(data, NULL, 10);
                } else if (counter == 3) {
                    if (strtol(data, NULL, 10) >= BIG) {
                        array[i].type = BIG;
                        get_type(array[i].type);
                    } else if (strtol(data, NULL, 10) >= MEDIUM) {
                        array[i].type = MEDIUM;
                        get_type(array[i].type);
                    } else if (strtol(data, NULL, 10) <= SMALL) {
                        array[i].type = SMALL;
                        get_type(array[i].type);
                    }
                }
                data = strtok(NULL, " ");
            }
            i++;
            counter = 0;
        }
    }
    fclose(fp);
    return i;
}

void get_oldest_phone(smartphone_t array[], int size)
{
    int oldest = array[0].year;
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (array[i].year < oldest) {
            oldest = array[i].year;
            index = i;
        }
    }
    printf("The %s is the oldest device in the database.\n", array[index].name);
}

int get_screen_size_count(smartphone_t array[], int size, const char *given_screen_size)
{
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (get_type(array[i].type) == given_screen_size) {
            counter++;
        }
    }
    return counter;
}

int get_prices(smartphone_t array[], char *filename, int size)
{

    FILE *fp;
    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Can't open the file.\n");
        return -2;
    } else {
        int age = 0;
        int lose = 50;
        for (int i = 0; i < size; ++i) {
            int price = 300;
            int current_year = 2018;
            age = current_year - array[i].year;
            if (age > 5) {
                age = 5;
            }

            if (array[i].type <= SMALL) {
                if (array[i].year == current_year) {
                    fprintf(fp, "%s %d\n", array[i].name, price);
                } else {
                    fprintf(fp, "%s %d\n", array[i].name, (price - (age * lose)));
                }
            } else if (array[i].type >= MEDIUM && array[i].type < BIG) {
                price += 100;
                if (array[i].year == current_year) {
                    fprintf(fp, "%s %d\n", array[i].name, price);
                } else {
                    fprintf(fp, "%s %d\n", array[i].name, (price - (age * lose)));
                }
            } else if (array[i].type >= BIG) {
                price *= 2;
                if (array[i].year == current_year) {
                    fprintf(fp, "%s %d\n", array[i].name, price);
                } else {
                    fprintf(fp, "%s %d\n", array[i].name, (price - (age * lose)));
                }
            }
        }
    }
    fclose(fp);
}
