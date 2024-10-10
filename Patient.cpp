#include <iostream>
#include <string>
#include "Patient.h"
#include "Customer.h"
#include "Person.h"

Patient::Patient(): medicalHistory(" "), prescriptionID(0){
    setName(" ");
    setAge(0);
    setID(0);
    setCorrectOrNot(false);
}

Patient::Patient(std::string name, int age, int ID, std::string illness, std::string medicalHistory, int prescriptionID): medicalHistory(medicalHistory), prescriptionID(prescriptionID){
    setName(name);
    setAge(age);
    setID(ID);
    setCorrectOrNot(false);
    setIllness(illness);
}

std::string Patient::getMedicalHistory(){
    return medicalHistory;
}

int Patient::getPrescriptionID(){
    return prescriptionID;
}

void Patient::setPrescriptionID(int prescriptionID){
    this->prescriptionID = prescriptionID;
}

void Patient::setMedicalHistory(std::string medicalHistory){
    this->medicalHistory = medicalHistory;
}

void Patient::greetingDialogue(Patient patient){
    std::cout << " Hello, my name is " << patient.getName() << ", and I'm here to collect some medicine." << std::endl;
}

void Patient::rightDialogue(){
    std::cout <<"Thank you, just what I wanted!"<< std::endl;
}

void Patient::wrongDialogue(){
    std::cout << "This is not what I wanted, you suck at your job!" << std::endl;
}

