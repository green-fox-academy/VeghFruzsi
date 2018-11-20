#include "person.h"
#include <iostream>

Person::Person(std::string name, int age, std::string gender) {
    _name = name;
    _age = age;
    _gender = gender;
}

Person::Person(const std::string name, int age, const Gender gender) : _name(name), _age(age), _gender(gender){

}

void Person::introduce() {
    std::cout << "Hi, I'm " << _name << "a" << _age << "year old" << _gender << ".";
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}


