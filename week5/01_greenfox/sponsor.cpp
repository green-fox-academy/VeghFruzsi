#include "sponsor.h"
#include <iostream>

Sponsor::Sponsor();

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
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender
              << " who represents " << _company << " and hired " << _hiredStudents
              << " so far." << std::endl;
}

void Sponsor::hire() {
    _hiredStudents++;
}