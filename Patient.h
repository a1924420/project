#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>
#include "Customer.h"
#include "Person.h"

class Patient: public Customer{

    private:

    std::string medicalHistory;
    int prescriptionID;

    public:

    std::string getMedicalHistory();
    int getPrescriptionID();

    void setPrescriptionID(int prescriptionID);
    void setMedicalHistory(std::string medicalHistory);

    void greetingDialogue(Patient patient);
    void rightDialogue();
    void wrongDialogue();

};

#endif 