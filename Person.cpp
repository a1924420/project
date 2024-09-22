#include <iostream>
#include <string>
#include "Person.h"

std::string Person::getName(){
    return name;
}

int Person::getAge(){
    return age;
}

void Person::setName(){
    this->name = name;
}

void Person::setAge(){
    this->age = age;
}