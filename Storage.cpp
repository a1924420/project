#include <iostream>
#include <string>
#include <vector>
#include "Medicine.h"
#include "Storage.h"

// Default constructor
// Initialises storage with zero medicines
Storage::Storage(): numOfMedicines(0), medicines(new std::vector<Medicine>()){}

// Parameterised constructor
// Initialises storage with a given number of medicines
Storage::Storage(int numOfMedicines): numOfMedicines(numOfMedicines), medicines(new std::vector<Medicine>()){}

// Destructor
Storage::~Storage(){
    delete medicines;
}

// Getter for the number of medicines in storage
int Storage::getNumOfMedicines(){
    return numOfMedicines;
}

// Getter for the list of medicines in storage
std::vector<Medicine> Storage::getMedicines(){
    return *medicines;
}

// Setter for the number of medicines in storage
void Storage::setNumOfMedicines(int numOfMedicines){
    this->numOfMedicines = numOfMedicines;
}

// Setter for the list of medicines in storage
void Storage::setMedicines(std::vector<Medicine>& medicines){
    *(this->medicines) = medicines;
    numOfMedicines = this->medicines->size();
}

// Adds a new medicine to the storage
void Storage::addMedicine(Medicine med){

    // Dynamically allocating new Medicine object for addition
    Medicine* newMed = new Medicine(med);

    // Adding medicine object to the array
    medicines->push_back(*newMed);

    // Update the number of medicines in storage to match the current vector size
    numOfMedicines = medicines->size();

    // Deleting newMed as content is already copied to vector
    delete newMed; 
}

// Removes a medicine from the storage
void Storage::removeMedicine(Medicine med){

    // Dynamically allocating new Medicine object for removal
    Medicine* medToRemove = new Medicine(med);

    // Creating a new vector to hold medicines that will remain after one is removed
    std::vector<Medicine> newMedicines;

    // Iterating through the current list of medicines
    for (int i = 0; i < numOfMedicines; i++){

        // Add the medicine to the new vector if its ID does not match that of the medicine being removed
        if (medicines->at(i).getMedID() != med.getMedID()){
            newMedicines.push_back(medicines->at(i));
        }
    }

    // Replace the current medicine list with the new list excluding the removed medicine
    *medicines = newMedicines;

    // Update the number of medicines in storage to match the current vector size
    numOfMedicines = medicines->size();

}