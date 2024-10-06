#include <iostream>
#include <string>

#include "Person.h"

// functions for Person class

std::string Person::getName(){
    return name;
}

int Person::getAge(){
    return age;
}

void Person::setName(std::string name){
    this->name = name;
}

void Person::setAge(int age){
    this->age = age;
}