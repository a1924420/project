#ifndef MEDICINE_H
#define MEDICINE_H

#include <iostream>
#include <string>

/* Medicine class represents a medication, 
storing its name, ID number and description. */
class Medicine{

    private:

    // Private variables used to store the medicines's details
    std::string medName; 
    int medID; 
    std::string description;

    public:

    // Default constructor
    Medicine();

    // Parameterised constructor
    Medicine(std::string medName, int medID, std::string description);

    // Getter functions to access and return private variables

    std::string getMedName();

    int getMedID();

    std::string getDescription();

    // Setter functions to modify private variables

    void setMedName(std::string medName);

    void setMedID(int medID);

    void setDescription(std::string description);

};

#endif