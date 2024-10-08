#include "Customer.h"
#include "Person.h"
#include "Patient.h"
#include "Medicine.h"

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

int Customer::getID() { 
    return ID;
     }

void Customer::setID(int ID) { 
    this->ID = ID; }

bool Customer::getCorrectOrNot() { 
    return correctOrNot; }

void Customer::setCorrectOrNot(bool correctOrNot) {
  this->correctOrNot = correctOrNot;
}

void checker(Medicine med, Patient patient){

    if (med.getMedID() == patient.getPrescriptionID()){
        patient.setCorrectOrNot(true);
        patient.rightDialogue();
    }else{
        patient.setCorrectOrNot(false);
        patient.wrongDialogue();
    }
}


void Customer::rightDialogue(){
    std::cout <<"Thank you for the medication, see you later!"<< std::endl;
}
void Customer::wrongDialogue(){
    std::cout <<"Sorry, I dont think thats right."<< std::endl;
}
