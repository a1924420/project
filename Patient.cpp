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
    cout<<" Hello, I am "<<getName()<<" here to pick up my"<<  <<"my ID number is"<<endl;
}

void rightDialogue(){
    cout<<"thank you,   "<<endl;
}

void wrongDialogue(){
    cout<<"..."<<endl;
}

