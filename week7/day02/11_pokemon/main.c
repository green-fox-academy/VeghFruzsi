#include <stdio.h>

/* Pokemon database!
 * You should store the following data in a structure
 *  - the name of the pokemon (which is shorter than 256 characters)
 *  - the age of the pokemon (in years)
 *  - the strength of the pokemon (between 0.0-10.0)
 *  - the speed of the pokemon (between 0.0-10.0)
 *  - the type of the pokemon (as a custom type, see below)

 * You should store the pokemon type in an enumeration
 * the valid types are:
 *  - normal
 *  - fire
 *  - water
 *  - electric
 *  - grass
 *  - ice
 *  - fighting
 *  - poision
 *  - ground
 *  - flying
 *  - psychic
 *  - bug
 *  - rock
 *  - ghost
 *  - dragon
 *  - dark
 *  - steel
 *  - fairy
 *
 * The "pokemon"-s are stored in an array.
 *
 * Write the following functions:
 * 1) Get faster pokemons than
 *      - parameters:
 *          - array
 *          - array length
 *          - speed
 *      - it returns the count of the faster pokemons than the parameter "speed"
 * 2) Get type count
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the count of pokemons which are "type"
 * 3) Get strongest type
 *      - parameters:
 *          - array
 *          - array length
 *          - strength
 *      - it returns the type of the strongest pokemon
 * 4) Get maximal strength of a type
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the highest strength among the "type" type pokemons
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */
typedef enum type{
    NORMAL, FIRE, WATER, ELECTRIC, GRASS,
    ICE, FIGHTING, POISION, GROUND, FLYING,
    PSYCHIC, BUG, ROCK, GHOST, DRAGON,
    DARK, STEEL, FAIRY
}type_t;

typedef struct pokemon{
    char name [256];
    int age;
    float strength;
    float speed;
    type_t type;
}pokemon_t;

int get_faster_pokemons_than (pokemon_t * pokemons, int pokemon_number, float actual_speed);
int get_type_count (pokemon_t * pokemons, int pokemon_number, type_t type);
char *get_types(type_t type);
char *get_strongest_type (pokemon_t * pokemons, int pokemon_number, float strength);
float get_max_strength_type (pokemon_t * pokemons, int pokemon_number, type_t type);


int main() 
{
	pokemon_t pokemons[6] =
            {{.name = "Pikachu", .age = 8, .strength = 7.5, .speed = 5.5, FIRE},
             {.name = "Jigglypuff", .age = 3, .strength = 9.3, .speed = 4, FAIRY},
             {.name = "Snorlax", .age = 21, .strength = 5.6, .speed = 2, NORMAL},
             {.name = "Diglett", .age = 10, .strength = 4.2, .speed = 8, GROUND},
             {.name = "Eevee", .age = 4, .strength = 8.2, .speed = 7, NORMAL},
             {.name = "Krabby", .age = 15, .strength = 6.7, .speed = 6, WATER}};

	int pokemon_number = sizeof(pokemons) / sizeof(pokemons[0]);
	float actual_speed = 5;
	type_t type = NORMAL;

	printf("How many fast pokemons we have: %d\n", get_faster_pokemons_than(pokemons, pokemon_number, actual_speed)); // correct 4
	printf("How many NORMAL type pokemons we have: %d\n", get_type_count(pokemons, pokemon_number, type)); // correct 2
	printf("The strongest pokemon's type is: %s\n", get_strongest_type(pokemons, pokemon_number, type)); // correct FAIRY
	printf("The strongest pokemon's in type is: %.1f\n", get_max_strength_type(pokemons,pokemon_number, type)); // correct 8.2

    return 0;
}

int get_faster_pokemons_than (pokemon_t * pokemons, int pokemon_number, float actual_speed){
    if (pokemons != NULL){
        int counter = 0;
        for (int i = 0; i < pokemon_number; ++i) {
            if(pokemons[i].speed > actual_speed){
                counter++;
            }
        }
        return counter;
    } else{
        printf("Something wrong with your get_faster function.\n");
        return -1;
    }
}

int get_type_count (pokemon_t * pokemons, int pokemon_number, type_t type){
    if (pokemons != NULL){
        int counter = 0;
        for (int i = 0; i < pokemon_number; ++i) {
            if(pokemons[i].type == type){
                counter++;
            }
        }
        return counter;
    } else{
        printf("Something wrong with your get_type function.\n");
        return -1;
    }
}

char *get_types(type_t type){
    switch (type){
        case NORMAL :
            return "NORMAL";
        case FIRE :
            return "FIRE";
        case WATER :
            return "WATER";
        case ELECTRIC :
            return "ELECTRIC";
        case GRASS :
            return "GRASS";
        case ICE :
            return "ICE";
        case FIGHTING :
            return "FIGHTING";
        case POISION :
            return "POISION";
        case GROUND :
            return "GROUND";
        case FLYING :
            return "FLYING";
        case PSYCHIC :
            return "PSYCHIC";
        case BUG :
            return "BUG";
        case ROCK :
            return "ROCK";
        case GHOST :
            return "GHOST";
        case DRAGON :
            return "DRAGON";
        case DARK :
            return "DARK";
        case STEEL :
            return "STEEL";
        case FAIRY :
            return "FAIRY";
    }
}

char *get_strongest_type (pokemon_t * pokemons, int pokemon_number, float strength){
        if(pokemons != NULL){
            float actual_max = 0;
            int max_index = 0;
            for (int i = 0; i < pokemon_number; ++i) {
                if (pokemons[i].strength > actual_max){
                    actual_max = pokemons[i].strength;
                    max_index = i;
                }
            }
            return get_types(pokemons[max_index].type);
        } else {
            printf(" Something went wrong in your get_strongest function.");
            return "-1";
        }
}

float get_max_strength_type (pokemon_t * pokemons, int pokemon_number, type_t type){
    if (pokemons != NULL){
        float actual_max = 0;
        for (int i = 0; i < pokemon_number; ++i) {
            if ( pokemons[i].type == type && pokemons[i].strength > actual_max){
                actual_max = pokemons[i].strength;
            }
        }
        return actual_max;
    } else {
        printf("Something went wrong in your get_max function.");
        return -1;
    }
}