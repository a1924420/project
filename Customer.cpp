#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"

int Customer::getID(){
    return ID;
}

void Customer::setID(int ID){
    this->ID = ID;
}

bool Customer::getCorrectOrNot(){
    return correctOrNot;
}

void Customer::setCorrectOrNot(bool correctOrNot){
    this->correctOrNot = correctOrNot;
}

void checker(){}