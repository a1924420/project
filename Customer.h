#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include "Person.h"

class Customer: public Person{

    private:

    int ID;

    public:

    int getID();

    void setID(int ID);

    

};

#endif