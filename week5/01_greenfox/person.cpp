#include "person.h"
#include <iostream>

Person::Person() { //:_name("Jane"), _age(20), _gender(Gender::FEMALE) {}
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}

Person::Person(const std::string name, int age, const Gender gender) { //: _name(name), _age(age), _gender(gender) {}
    _name = name;
    _age = age;
    _gender = gender;
}

void Person::introduce() {
    if (_gender == Gender::FEMALE) {
        std::cout << "Hi, I'm " << _name << " a " << _age << " year old female." << std::endl;
    } else {
        std::cout << "Hi, I'm " << _name << " a " << _age << " year old man." << std::endl;
    }
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}
