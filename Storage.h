#ifndef STORAGE_H
#define STORAGE_H

#include <iostream>
#include <string>
#include <vector>
#include "Medicine.h"

class Storage{

    private:

    int numOfMedicines;
    std::vector<Medicine> medicines;

    public:

    Storage();
    Storage(int numOfMedicines);

    int getNumOfMedicines();
    std::vector<Medicine> getMedicines();
    void setNumOfMedicines(int numOfMedicines);
    void setMedicines(std::vector<Medicine> medicines);
    void addMedicine(Medicine med);

};

#endif