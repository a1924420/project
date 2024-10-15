#include "Customer.h"
#include "Person.h"
#include "Medicine.h"
#include "Player.h"
#include "Patient.h"

#include <iostream>
#include <string>
// initialise the customer
Customer::Customer(): ID(0), correctOrNot(false){
    setName(" ");
    setAge(0);
}

Customer::Customer(std::string name, int age, int ID): ID(ID){
    setName(name);
    setAge(age);
}

Customer::Customer(std::string name, int age, int ID, std::string illness, std::string medicalHistory): ID(ID), 
correctOrNot(false), illness(illness), medicalHistory(medicalHistory){
    setName(name);
    setAge(age);
}
//Getter for the name of the name of the customer
std::string Customer::getName(){
    return name;
}
//Getter for the age of the customer
int Customer::getAge(){
    return age;
}
// Gets the illnes the customer has and is used to determine the 
std::string Customer::getIllness(){
    return illness;
}
// Gets the medical history of the customer 
std::string Customer::getMedicalHistory(){
    return medicalHistory;
}
//Sets the name of the customer 
void Customer::setName(std::string name){
    this->name = name;
}
// Sets the age of the customer
void Customer::setAge(int age){
    this->age = age;
}
// setter for the illness of the customer
void Customer::setIllness(std::string illness){
    this->illness = illness;
}
// Setter for the medical history of the customer
void Customer::setMedicalHistory(std::string medicalHistory){
    this->medicalHistory = medicalHistory;
}
// Getter for the ID of the patient
int Customer::getID() { 
    return ID;
}
// the Setter for getting the ID of the patient
void Customer::setID(int ID) { 
    this->ID = ID; }
// The getter for checking if it is correct or not.
bool Customer::getCorrectOrNot() { 
    return correctOrNot; }
// The setter for checking if it is correct or not
void Customer::setCorrectOrNot(bool correctOrNot) {
  this->correctOrNot = correctOrNot;
}
// This checks if the player has prescribed the correct information to customer
void Customer::checker(Medicine med, Patient patient, Player player){

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
// The customer introduces themselves
void Customer::greetingDialogue(Customer customer){
    std::cout << "Hello, my name is " << customer.getName() << ", and I'm here to collect some medicine." << std::endl;
}

// Below functions defined for testing only
void Customer::rightDialogue(){
    std::cout <<"Thank you for the medication, see you later!"<< std::endl;
}
void Customer::wrongDialogue(){
    std::cout <<"Seriously? You suck at your job."<< std::endl;
}


