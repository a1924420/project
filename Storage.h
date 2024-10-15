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
    int numOfMedicines; 
    std::vector<Medicine>* medicines; 

    public:

    // Default constructor
    Storage();

    // Parameterised constructor
    Storage(int numOfMedicines);

    // Destructor 
    ~Storage();

    // Getter functions to access and return private variables

    int getNumOfMedicines();

    std::vector<Medicine> getMedicines();

    // Setter functions to modify private variables

    void setNumOfMedicines(int numOfMedicines);

    void setMedicines(std::vector<Medicine>& medicines);

    // Adds a new medicine to the storage
    void addMedicine(Medicine med); 

    // Removes a medicine from the storage
    void removeMedicine(Medicine med); 

};

#endif