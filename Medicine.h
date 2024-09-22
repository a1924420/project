#ifndef MEDICINE_H
#define MEDICINE_H

#include <iostream>
#include <string>
#include "Patient.h"

class Medicine: public Patient{

    private:

    std::string medName;
    int medID;
    std::string description;

    public:

    std::string getMedName();
    int getMedID();
    std::string getDescription();

    void setMedName(std::string medName);
    void setMedID(int medID);
    void setDescription(std::string description);

    int getPrescriptionID();
    void setPrescriptionID(int prescriptionID);

};

#endif