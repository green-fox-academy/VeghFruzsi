#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

struct rectangular_cuboid{
    double a;
    double b;
    double c;
};

float get_surface(struct rectangular_cuboid s);
float get_volume(struct rectangular_cuboid s);

int main()
{
    struct rectangular_cuboid data;
    data.a = 3;
    data.b = 4;
    data.c = 5;

    printf("the surface of the cuboid is: %.f\n", get_surface(data));
    printf("the volume of the cuboid is: %.f", get_volume(data));
    return 0;
}

float get_surface(struct rectangular_cuboid s){
    float surface = 2 * ((s.a * s.b) + (s.a * s.c) + (s.b * s.c));
    return surface;
}

float get_volume(struct rectangular_cuboid s){
    float volume = (s.a * s.b * s.c);
    return volume;
}
