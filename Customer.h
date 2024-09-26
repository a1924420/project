#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include "Person.h"

class Customer: public Person{

    private:

    std::string ID;
    bool correctOrNot;

    public:

    std::string getID();

    void setID(int ID);

    bool getCorrectOrNot();

    void setCorrectOrNot(bool correctOrNot);

    void checker();

    virtual void rightDialogue();
    virtual void wrongDialogue();

};

#endif