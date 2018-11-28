#include "student.h"
#include <iostream>

Student::Student() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization) {
    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganization = previousOrganization;
    _skippedDays = 0;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce() {
    if (_gender == Gender::FEMALE) {
        std::cout << "Hi, I'm " << _name << " a " << _age << " year old female from "
                  << _previousOrganization << " who skipped " << _skippedDays <<
                  " days from the course already." << std::endl;
    } else {
        std::cout << "Hi, I'm " << _name << " a " << _age << " year old man from "
                  << _previousOrganization << " who skipped " << _skippedDays <<
                  " days from the course already." << std::endl;
    }
}

int Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}

