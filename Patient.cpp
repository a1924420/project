#include <iostream>
#include <string>
#include "Patient.h"
#include "Customer.h"
#include "Person.h"
// Initailses the Patient
Patient::Patient(): prescriptionID(0){
    setName(" ");
    setAge(0);
    setID(0);
    setCorrectOrNot(false);
    setMedicalHistory(" ");
}
// Initailses the Patient
Patient::Patient(std::string name, int age, int ID, std::string illness, std::string medicalHistory, int prescriptionID): prescriptionID(prescriptionID){
    setName(name);
    setAge(age);
    setID(ID);
    setCorrectOrNot(false);
    setIllness(illness);
    setMedicalHistory(medicalHistory);
}
// Getter for the prescription ID from the patient
int Patient::getPrescriptionID(){
    return prescriptionID;
}
//Sets the prescription ID of the patient
void Patient::setPrescriptionID(int prescriptionID){
    this->prescriptionID = prescriptionID;
}
// outputs this dialogue when the patient is given the correct medication
void Patient::rightDialogue(){
    std::cout <<"Thank you for the medication, see you later!"<< std::endl;
}
// outputs this dialogue when the patient is given the wrong medication
void Patient::wrongDialogue(){
    std::cout <<"Seriously? You suck at your job."<< std::endl;
}

