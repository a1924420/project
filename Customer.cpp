#include "Customer.h"
#include "Person.h"

#include <iostream>
#include <string>

std::string Customer::getID() { return ID; }

void Customer::setID(int ID) { this->ID = ID; }

bool Customer::getCorrectOrNot() { return correctOrNot; }

void Customer::setCorrectOrNot(bool correctOrNot) {
  this->correctOrNot = correctOrNot;
}

void checker() {
    // if (medID == prescriptionID) -> need to include Patient.h 
}