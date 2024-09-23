#ifndef MEDICINE_H
#define MEDICINE_H

#include <iostream>
#include <string>

class Medicine{

    private:

    std::string medName;
    int medID;
    std::string description;

    public:

    Medicine();

    Medicine(std::string medName, int medID, std::string description);

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