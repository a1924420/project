#include <iostream>
#include <string>
#include "Patient.h"
#include "Customer.h"
#include "Person.h"

Patient::Patient(): prescriptionID(0){
    setName(" ");
    setAge(0);
    setID(0);
    setCorrectOrNot(false);
    setMedicalHistory(" ");
}

Patient::Patient(std::string name, int age, int ID, std::string illness, std::string medicalHistory, int prescriptionID): prescriptionID(prescriptionID){
    setName(name);
    setAge(age);
    setID(ID);
    setCorrectOrNot(false);
    setIllness(illness);
    setMedicalHistory(medicalHistory);
}

int Patient::getPrescriptionID(){
    return prescriptionID;
}

void Patient::setPrescriptionID(int prescriptionID){
    this->prescriptionID = prescriptionID;
}

void Patient::rightDialogue(){
    std::cout <<"Thank you for the medication, see you later!"<< std::endl;
}
void Patient::wrongDialogue(){
    std::cout <<"Seriously? You suck at your job."<< std::endl;
}

