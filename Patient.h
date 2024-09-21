#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>

class Patient{

    private:

    std::string name;
    int age;
    std::string medicalHistory;
    int ID;

    public:

    Patient(): name(name), age(age), medicalHistory(medicalHistory), ID(ID){}

    std::string getName();
    int getAge();
    std::string getMedicalHistory();
    int getID();

    void setName(std::string name);
    void setAge(int age);
    void setMedicalHistory(std::string medicalHistory);
    void setID(int ID);

};

#endif 