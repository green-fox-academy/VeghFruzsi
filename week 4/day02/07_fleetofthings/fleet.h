#ifndef INC_07_FLEETOFTHINGS_FLEET_H
#define INC_07_FLEETOFTHINGS_FLEET_H

#include <vector>
#include <string>

#include "thing.h"


class Fleet {
public:
    Fleet();

    void add(const Thing& thing);
    std::string toString();

private:
    std::vector<Thing> things;
};


#endif //INC_07_FLEETOFTHINGS_FLEET_H
