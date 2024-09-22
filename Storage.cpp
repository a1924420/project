#include <iostream>
#include <string>
#include <vector>
#include "Medicine.h"
#include "Storage.h"

int Storage::getNumOfMedicines(){
    return numOfMedicines;
}

std::vector<Medicine> Storage::getMedicines(){
    return medicines;
}

void Storage::setNumOfMedicines(int numOfMedicines){
    this->numOfMedicines = numOfMedicines;
}

void Storage::setMedicines(std::vector<Medicine> medicines){
    this->medicines = medicines;
    numOfMedicines = medicines.size();
}

void Storage::addMedicine(Medicine med){
    medicines.push_back(med);
    numOfMedicines = medicines.size();
}