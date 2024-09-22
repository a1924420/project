#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"

class Patient: public Customer{

    private:

    std::string medicalHistory;
    int prescriptionID;

    public:

    std::string getMedicalHistory();
    int getPrescriptionID();

    void setPrescriptionID(int prescriptionID);
    void setMedicalHistory(std::string medicalHistory);

    void greetingDialogue();
    void rightDialogue();
    void wrongDialogue();

};

#endif 