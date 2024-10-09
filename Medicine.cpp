#include <iostream>
#include <string>
#include "Medicine.h"

// Default constructor
// Initialises medicine with default variables (empty strings for medName and description, medID set to 0)
Medicine::Medicine(): medName(" "), medID(0), description(" "){}

// Parameterised constructor
// Initialises medicines's details with specific strings for name, ID and description
Medicine::Medicine(std::string medName, int medID, std::string description):
medName(medName), medID(medID), description(description){}

// Getter for the medicine name
// @return: returns the name of the medicine
std::string Medicine::getMedName(){
    return medName;
}

// Getter for the medicine ID
// @return: returns the medicine ID
int Medicine::getMedID(){
    return medID;
}

// Getter for the medicine description
// @return: returns the medicine description
std::string Medicine::getDescription(){
    return description;
}

// Setter for the medicine name
// @param medName: new name of the medicine
void Medicine::setMedName(std::string medName){
    this->medName = medName;
}

// Setter for the medicine ID
// @param medID: new ID of the medicine
void Medicine::setMedID(int medID){
    this->medID = medID;
}

// Setter for the medicine description
// @param description: new description of the medicine
void Medicine::setDescription(std::string description){
    this->description = description;
}

