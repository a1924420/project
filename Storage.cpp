#include <iostream>
#include <string>
#include "Medicine.h"
#include "Storage.h"

int Storage::getNumOfMedicines(){
    return numOfMedicines;
}

std::string Storage::getMedicines(){
    return medicines;
}

void Storage::setNumOfMedicines(int numOfMedicines){
    this->numOfMedicines = numOfMedicines;
}

void Storage::setMedicines(std::string medicines){}