#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include "Person.h"

class Customer: public Person{

    private:

    int ID;
    bool correctOrNot;

    public:

    int getID();

    void setID(int ID);

    bool getCorrectOrNot();

    void setCorrectOrNot(bool correctOrNot);

    void checker();

    virtual void rightDialogue();
    virtual void wrongDialogue();

};

#endif