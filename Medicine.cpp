#include <iostream>
#include <string>
#include "Medicine.h"

Medicine::Medicine(): medName(" "), medID(0), description(" "){}

Medicine::Medicine(std::string medName, int medID, std::string description):
medName(medName), medID(medID), description(description){}

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

