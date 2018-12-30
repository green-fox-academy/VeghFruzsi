#include <stdio.h>
#include <mem.h>

typedef enum diglevel{
    BABY,
    IN_TRAINING,
    ROOKIE,
    CHAMPION,
    ULTIMATE,
    MEGA
} diglevel_t;

typedef struct digimon {
    char name [128];
    int age;
    int health;
    char tamer_name [256];
    diglevel_t diglevel;
} digimon_t;

int get_minimum_health (digimon_t *digimons, int digimon_number);
char *get_diglevel(diglevel_t diglevel);
int get_same_diglevel_count (digimon_t *digimons, int digimon_number, diglevel_t diglevel);
int get_same_tamer (digimon_t * digimons, int digimon_number, char* tamer_name);
int get_average_health_same_tamer (digimon_t * digimons, int digimon_number, char* tamer_name);

int main()
{
    digimon_t digimons[6] = {{.name = "Seadragon", .age = 100, .health = 86, .tamer_name = "Sora", MEGA },
                             {.name = "Hermmon", .age = 72, .health = 92, .tamer_name = "Izzy", IN_TRAINING },
                             {.name = "Pumpmon", .age = 56, .health = 43, .tamer_name = "Matt", MEGA },
                             {.name = "Vamdemon", .age = 102, .health = 22, .tamer_name = "Mimi", BABY },
                             {.name = "Beelzebumon", .age = 230, .health = 11, .tamer_name = "Izzy", ULTIMATE },
                             {.name = "Belial", .age = 27, .health = 73, .tamer_name = "Izzy", MEGA }};

    int digimon_number = sizeof(digimons) / sizeof(digimons[0]);
    diglevel_t diglevel = MEGA;
    char tamer_name [256] = "Izzy";

    printf("On the lowest health level digimon is: %d\n", get_minimum_health(digimons, digimon_number)); // correct 4
    printf("On the same digitalation level: %d\n", get_same_diglevel_count(digimons, digimon_number, diglevel)); // correct 3
    printf("Train with the same %s tamer digimons: %d\n", tamer_name, get_same_tamer(digimons, digimon_number, tamer_name)); // correct 3
    printf("Average with the same %s tamer digimons: %d\n", tamer_name, get_average_health_same_tamer(digimons, digimon_number, tamer_name)); // correct 176/3


    return 0;
}

int get_minimum_health (digimon_t *digimons, int digimon_number){
    if (digimons != NULL){
        int min = digimons[0].health;
        int index;
        for (int i = 1; i < digimon_number; ++i) {
            if (digimons[i].health < min){
                min = digimons[i].health;
                index = i;
            }
        }
        return index;
    } else {
        printf("Something went wrong in yout get_min function.");
        return -1;
    }
}

char *get_diglevel(diglevel_t diglevel){
        switch (diglevel){
            case BABY :
                return "BABY";
            case IN_TRAINING :
                return "IN_TRAINING";
            case ROOKIE :
                return "ROOKIE";
            case CHAMPION :
                return "CHAMPION";
            case ULTIMATE :
                return "ULTIMATE";
            case MEGA :
                return "MEGA";
        }
}

int get_same_diglevel_count (digimon_t *digimons, int digimon_number, diglevel_t diglevel){
    if (digimons != NULL){
        int counter = 0;
        for (int i = 0; i < digimon_number; ++i) {
            if ( digimons[i].diglevel == diglevel){
                counter++;
            }
        }
        return counter;
    } else {
        printf("Something went wrong in your get_same_diglevel function.");
        return -1;
    }
}

int get_same_tamer (digimon_t * digimons, int digimon_number, char* tamer_name){
    if (digimons != NULL && strlen(tamer_name) <256){
        int counter = 0;
        for (int i = 0; i < digimon_number; ++i) {
            if (!strcmp(digimons[i].tamer_name, tamer_name)){
                counter++;
            }
        }
        return counter;
    } else {
        printf("Something went wrong in your get_same_tamer function.");
        return -1;
    }
}

int get_average_health_same_tamer (digimon_t * digimons, int digimon_number, char* tamer_name){
    if (digimons != NULL && strlen(tamer_name) <256){
        int counter = 0;
        int sum = 0;
        for (int i = 0; i < digimon_number; ++i) {
            if (!strcmp(digimons[i].tamer_name, tamer_name)){
                sum += digimons[i].health;
                counter ++;
            }
        }
        return sum / counter;
    } else {
        printf("Something went wrong in yout get_average function.");
        return -1;
    }
}

