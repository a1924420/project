#include "Customer.h"
#include "Person.h"
#include "Medicine.h"
#include "Player.h"
#include "Patient.h"

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

std::string Customer::getIllness(){
    return illness;
}

void Customer::setName(std::string name){
    this->name = name;
}

void Customer::setAge(int age){
    this->age = age;
}

void Customer::setIllness(std::string illness){
    this->illness = illness;
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

void Customer::checker(Medicine med, Patient& patient, Player& player){

    if (med.getMedID() == patient.getPrescriptionID()){
        patient.setCorrectOrNot(true);
        patient.rightDialogue();
        int currentScore = player.getScore();  
        player.setScore(currentScore + 10); 
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
