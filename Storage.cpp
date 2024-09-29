#include <iostream>
#include <string>
#include <vector>
#include "Medicine.h"
#include "Storage.h"

// Default constructor
// Initialises storage with zero medicines
Storage::Storage(): numOfMedicines(0), medicines(0){}

// Parameterised constructor
// Initialises storage with a given number of medicines
Storage::Storage(int numOfMedicines): numOfMedicines(numOfMedicines), medicines(0){}

// Getter for the number of medicines in storage
// @return: returns the number of medicines in storage
int Storage::getNumOfMedicines(){
    return numOfMedicines;
}

// Getter for the list of medicines in storage
// @return: returns the list of medicines in storage
std::vector<Medicine> Storage::getMedicines(){
    return medicines;
}

// Setter for the number of medicines in storage
// @param numOfMedicines: new number of medicines in storage
void Storage::setNumOfMedicines(int numOfMedicines){
    this->numOfMedicines = numOfMedicines;
}

// Setter for the list of medicines in storage
// @param medicines: new list of medicines in storage
void Storage::setMedicines(std::vector<Medicine> medicines){
    this->medicines = medicines;
    numOfMedicines = medicines.size();
}

// Adds a new medicine to the storage
// @param med: new medicine being added to storage
void Storage::addMedicine(Medicine med){

    // Add the medicine to the medicines vector
    medicines.push_back(med);

    // Update the number of medicines in storage to match the current vector size
    numOfMedicines = medicines.size();
}

// Removes a medicine from the storage
// @param med: medicine being removed from storage, identified by its ID number
void Storage::removeMedicine(Medicine med){

    // Creating a new vector to hold medicines that will remain after one is removed
    std::vector<Medicine> newMedicines;

    // Iterating through the current list of medicines
    for (int i = 0; i < numOfMedicines; i++){

        // Add the medicine to the new vector if its ID does not match that of the medicine being removed
        if (medicines[i].getMedID() != med.getMedID()){
            newMedicines.push_back(medicines[i]);
        }
    }

    // Replace the current medicine list with the new list excluding the removed medicine
    medicines = newMedicines;

    // Update the number of medicines in storage to match the current vector size
    numOfMedicines = medicines.size();
}