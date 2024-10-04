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

    Customer();

    Customer(std::string name, int age, int ID);

    std::string getName() override;
    
    int getAge() override;

    void setName(std::string name) override;

    void setAge(int age) override;

    int getID();

    void setID(int ID);

    bool getCorrectOrNot();

    void setCorrectOrNot(bool correctOrNot);

    void checker();

    virtual void rightDialogue();
    virtual void wrongDialogue();

};

#endif