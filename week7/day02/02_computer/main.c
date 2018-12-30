#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer computer;
    computer.cpu_speed_GHz = 3.20;
    computer.ram_size_GB = 4;
    computer.bits = 4;

    Notebook notebook;
    notebook.cpu_speed_GHz = 5.70;
    notebook.ram_size_GB = 8;
    notebook.bits = 8;

    printf("The computer has: %.2f CPU Speed, %d GB RAM and %d bits.\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);
    printf("The notebook has: %.2f CPU Speed, %d GB RAM and %d bits.", notebook.cpu_speed_GHz, notebook.ram_size_GB, notebook.bits);
    return 0;
}