#ifndef INC_01_GREENFOX_SPONSOR_H
#define INC_01_GREENFOX_SPONSOR_H

#include <iostream>
#include "person.h"

class Sponsor : public Person {

public:
    Sponsor();
    Sponsor(std::string name, int age, Gender gender, std::string company);

    void getGoal() override;
    void introduce() override;
    void hire();

private:
    std::string _company;
    int _hiredStudents;
};


#endif //INC_01_GREENFOX_SPONSOR_H
