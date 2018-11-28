#ifndef INC_01_GREENFOX_MENTOR_H
#define INC_01_GREENFOX_MENTOR_H

#include "person.h"
#include <iostream>

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor();
    Mentor(std::string name, int age, Gender gender, Level level);

    void getGoal();
    void introduce();

private:
    Level _level;

};


#endif //INC_01_GREENFOX_MENTOR_H
