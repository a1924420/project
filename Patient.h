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

    Patient();

    Patient(std::string name, int age, int ID, std::string illness, std::string medicalHistory, int prescriptionID);

    int getPrescriptionID();

    void setPrescriptionID(int prescriptionID);

    void greetingDialogue(Patient patient);
    void rightDialogue();
    void wrongDialogue();

};

#endif 