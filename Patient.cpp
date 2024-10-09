#include <iostream>
#include <string>
#include "Patient.h"
#include "Customer.h"
#include "Person.h"

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

void greetingDialogue(Patient patient){
    std::cout << " Hello, my name is " << patient.getName() << std::endl;
}

void rightDialogue(){
    std::cout <<"thank you,   "<< std::endl;
}

void wrongDialogue(){
    std::cout << "..." << std::endl;
}

