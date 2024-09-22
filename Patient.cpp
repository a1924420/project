#include <iostream>
#include <string>
#include "Patient.h"

Patient::Patient(): name(name), age(age), medicalHistory(medicalHistory), ID(ID){}

std::string Patient::getName(){
    return name;
}

int Patient::getAge(){
    return age;
}

std::string Patient::getMedicalHistory(){
    return medicalHistory;
}

int Patient::getID(){
    return ID;
}

void Patient::setName(std::string name){
    this->name = name;
}

void Patient::setAge(int age){
    this->age = age;
}

void Patient::setMedicalHistory(std::string medicalHistory){
    this->medicalHistory = medicalHistory;
}

void Patient::setID(int ID){
    this->ID = ID;
}

void greetingDialogue(){}

void rightDialogue(){}

void wrongDialogue(){}

void checker(){}