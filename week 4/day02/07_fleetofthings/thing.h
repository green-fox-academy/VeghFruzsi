#ifndef INC_07_FLEETOFTHINGS_THING_H
#define INC_07_FLEETOFTHINGS_THING_H

#include <string>


class Thing {
public:
    Thing(const std::string &name);

    void complete();
    std::string toString();

private:
    std::string _name;
    bool _completed;
};


#endif //INC_07_FLEETOFTHINGS_THING_H
