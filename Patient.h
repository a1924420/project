#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>
#include "Customer.h"
#include "Person.h"

class Patient: public Customer{

    private:

    int prescriptionID;

    public:
// default constructor
    Patient();
// Parameterised constructor
    Patient(std::string name, int age, int ID, std::string illness, std::string medicalHistory, int prescriptionID);
//Getter for the prescription ID for the patient
    int getPrescriptionID();
// Setter for the prescription ID
    void setPrescriptionID(int prescriptionID);
// Member function for the dialogue when the player gives the correct medication to the customer 
    void rightDialogue();

// Member function for the dialogue when the player gives the wrong medication to the customer 
    void wrongDialogue();

};

#endif 
