#ifndef MEDICINE_H
#define MEDICINE_H

#include <iostream>
#include <string>

/* Medicine class represents a medication, 
storing its name, ID number and description. */
class Medicine{

    private:

    // Private variables used to store the medicines's details
    std::string medName; // Name of the medicine
    int medID; // Unique ID number of the medicine
    std::string description; // Brief description of the medicine

    public:

    // Default constructor
    // Initialises medicine with default variables (empty strings for medName and description, medID set to 0)
    Medicine();

    // Parameterised constructor
    // Initialises medicines's details with specific strings for name, ID and description
    Medicine(std::string medName, int medID, std::string description);

    // Getter functions to access and return private variables

    // Returns the name of the medicine 
    std::string getMedName();

    // Returns the ID number of the medicine
    int getMedID();

    // Returns the description of the medicine
    std::string getDescription();

    // Setter functions to modify private variables

    // Sets the name of the medicine
    void setMedName(std::string medName);

    // Sets the ID number of the medicine
    void setMedID(int medID);

    // Sets the description of the medicine
    void setDescription(std::string description);

};

#endif