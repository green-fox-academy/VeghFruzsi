#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {
    VOLVO,
    TOYOTA,
    LAND_ROVER,
    TESLA};

typedef struct car {
	enum car_type type;
	double km;
	double gas;
}car_t;

void car_stats(car_t* car);

int main()
{
    car_t volvo;
    volvo.type = VOLVO;
    volvo.km = 250;
    volvo.gas = 5;

    car_t toyota;
    toyota.type = TOYOTA;
    toyota.km = 200;
    toyota.gas = 8;

    car_t landrover;
    landrover.type = LAND_ROVER;
    landrover.km = 180;
    landrover.gas = 7;

    car_t tesla;
    tesla.type = TESLA;
    tesla.km = 300;
    tesla.gas = 0;

	car_stats(&tesla);
    car_stats(&volvo);
    car_stats(&landrover);
    car_stats(&toyota);
	return 0;
}

void car_stats(car_t* car){
    switch (car->type){
        case TESLA: printf("TESLA's max speed is %2.f km/h and it is an electric car.\n", car->km);
        break;
        case VOLVO: printf("VOLVO's max speed is %2.f km/h and needs %.f liter gas on 100 km.\n", car->km, car->gas);
        break;
        case TOYOTA: printf("TOYOTA's max speed is %2.f km/h and needs %.f liter gas on 100 km.\n", car->km, car->gas);
        break;
        case LAND_ROVER: printf("LAND ROVER's max speed is %2.f km/h and needs %.f liter gas on 100 km.\n", car->km, car->gas);
        break;
    }
}
