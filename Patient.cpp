#include <iostream>
#include <string>
#include "Patient.h"

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

void greetingDialogue(){
    // std::cout <<" Hello, I am "<<getName()<<" here to pick up my"<<  <<"my ID number is"<<endl;
}

void rightDialogue(){
    std::cout <<"thank you,   "<< std::endl;
}

void wrongDialogue(){
    std::cout << "..." << std::endl;
}

