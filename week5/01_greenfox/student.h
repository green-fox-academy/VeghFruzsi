#ifndef INC_01_GREENFOX_STUDENT_H
#define INC_01_GREENFOX_STUDENT_H

#include <iostream>
#include "person.h"

class Student : public Person {
public:

    Student();

    Student(std::string name, int age, Gender gender, std::string previousOrganization);

    void getGoal() override;
    void introduce() override;
    int skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //INC_01_GREENFOX_STUDENT_H
