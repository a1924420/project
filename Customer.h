#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Medicine.h"

class Customer: public Person{

    private:

    int ID;
    bool correctOrNot;

    public:

    Customer();

    Customer(std::string name, int age, int ID);

    std::string getName();
    
    int getAge();

    void setName(std::string name);

    void setAge(int age);

    int getID();

    void setID(int ID);

    bool getCorrectOrNot();

    void setCorrectOrNot(bool correctOrNot);

    void checker(Medicine med, Patient patient);

    virtual void rightDialogue();
    virtual void wrongDialogue();

};

#endif