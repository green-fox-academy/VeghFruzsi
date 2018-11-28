#include "sponsor.h"
#include <iostream>

Sponsor::Sponsor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _company = "Google";
    _hiredStudents = 0;
}

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) {
    _name = name;
    _age = age;
    _gender = gender;
    _company = company;
    _hiredStudents = 0;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::introduce() {
    if (_gender == Gender::FEMALE) {
        std::cout << "Hi, I'm " << _name << ", a " << _age << " year old female who represents " << _company
                  << " and hired " << _hiredStudents << " students so far." << std::endl;
    } else {
        std::cout << "Hi, I'm " << _name << ", a " << _age << " year old male who represents " << _company
                  << " and hired " << _hiredStudents << " students so far." << std::endl;
    }
}

void Sponsor::hire() {
    _hiredStudents++;
}

