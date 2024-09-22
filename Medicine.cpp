#include <iostream>
#include <string>
#include "Medicine.h"

std::string Medicine::getMedName(){
    return medName;
}

int Medicine::getMedID(){
    return medID;
}

std::string Medicine::getDescription(){
    return description;
}

void Medicine::setMedName(std::string medName){
    this->medName = medName;
}

void Medicine::setMedID(int medID){
    this->medID = medID;
}

void Medicine::setDescription(std::string description){
    this->description = description;
}

