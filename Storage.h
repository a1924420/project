#ifndef STORAGE_H
#define STORAGE_H

#include <iostream>
#include <string>
#include "Medicine.h"

class Storage: public Medicine {

    private:

    int numOfMedicines;
    std::string medicines;

    public:

    int getNumOfMedicines();
    std::string getMedicines();
    void setNumOfMedicines(int numOfMedicines);
    void setMedicines(std::string medicines);

};

#endif