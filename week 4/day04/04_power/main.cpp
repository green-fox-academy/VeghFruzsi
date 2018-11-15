#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int powerN(int n, int power)
{
    if (power >= 1) {
        return n * powerN (n, power-1);
    } else{
        return 1;
    }
}

int main()
{
    std::cout  << powerN(5,4) << std::endl;
    return 0;
}