#ifndef INC_01_GREENFOX_PERSON_H
#define INC_01_GREENFOX_PERSON_H

#include <iostream>

enum class Gender{
    MALE,
    FEMALE
};

class Person {
public:
    Person();
    Person(const std::string name, int age, const Gender gender);

    virtual void introduce();
    virtual void getGoal();

protected:
    std::string _name;
    int _age;
    Gender _gender;

};

#endif //INC_01_GREENFOX_PERSON_H