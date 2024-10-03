#ifndef STORAGE_H
#define STORAGE_H

#include <iostream>
#include <string>
#include <vector>
#include "Medicine.h"

/* Storage class manages a collection of medication, 
and includes functions to add, remove and access them. */
class Storage{

    private:

    // Private variables used to store the storage details
    int numOfMedicines; // Number of medicines in storage
    std::vector<Medicine> medicines; // Vector used to store the list of Medicine objects

    public:

    // Default constructor
    // Initialises storage with zero medicines
    Storage();

    // Parameterised constructor
    // Initialises storage with a given number of medicines
    Storage(int numOfMedicines);

    // Getter functions to access and return private variables

    // Returns the number of medicines in storage
    int getNumOfMedicines();

    // Returns the list of medicines in storage
    std::vector<Medicine> getMedicines();

    // Setter functions to modify private variables

    // Sets the number of medicines in storage
    void setNumOfMedicines(int numOfMedicines);

    // Sets the list of medicines in storage
    void setMedicines(std::vector<Medicine> medicines);

    // Adds a new medicine to the storage
    void addMedicine(Medicine med); // remove function

    // Removes a medicine from the storage
    void removeMedicine(Medicine med); // remove this function

};

#endif