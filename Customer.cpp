#include "Customer.h"
#include "Person.h"

#include <iostream>
#include <string>

Customer::Customer(): ID(0), correctOrNot(false){
    setName(" ");
    setAge(0);
}

Customer::Customer(std::string name, int age, int ID): ID(ID), correctOrNot(false){
    setName(name);
    setAge(age);
}

std::string Customer::getName(){
    return name;
}

int Customer::getAge(){
    return age;
}

void Customer::setName(std::string name){
    this->name = name;
}

void Customer::setAge(int age){
    this->age = age;
}

int Customer::getID() { return ID; }

void Customer::setID(int ID) { this->ID = ID; }

bool Customer::getCorrectOrNot() { return correctOrNot; }

void Customer::setCorrectOrNot(bool correctOrNot) {
  this->correctOrNot = correctOrNot;
}

void checker() {
    // if (medID == prescriptionID) -> need to include Patient.h 
}