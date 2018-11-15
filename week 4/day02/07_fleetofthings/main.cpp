#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    Thing x ("Get milk");
    Thing y ("Remove the obstacles");
    Thing z ("Stand up");
    Thing w ("Eat lunch");

    z.complete();
    w.complete();

    fleet.add(x);
    fleet.add(y);
    fleet.add(z);
    fleet.add(w);

    std::cout << fleet.toString() << std::endl;
    return 0;

}