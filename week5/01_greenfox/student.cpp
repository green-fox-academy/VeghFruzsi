#include "student.h"
#include <iostream>

Student::Student() {}

Student::Student(std::string name, int age, Gender gender,
        std::string previousOrganization) {
    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganization = previousOrganization;
    _skippedDays = 0;
}

void Student::getGoal(){
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce(){
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << " from "
    << _previousOrganization << " who skipped " << _skippedDays <<
    " days from the course already." << std::endl;
}


int Student::skipDays(int numberOfDays){
_skippedDays+= numberOfDays;
}
