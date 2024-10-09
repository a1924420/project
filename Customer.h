#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Medicine.h"
#include "Player.h"

class Patient;

class Customer: public Person{

    private:

    int ID;
    bool correctOrNot;
    std::string illness;

    public:

    Customer();

    Customer(std::string name, int age, int ID);

    Customer(std::string name, int age, int ID, std::string illness);

    std::string getName();
    
    int getAge();

    std::string getIllness();

    void setName(std::string name);

    void setAge(int age);

    int getID();

    void setID(int ID);

    void setIllness(std::string illness);

    bool getCorrectOrNot();

    void setCorrectOrNot(bool correctOrNot);

    void checker(Medicine med, Patient& patient, Player& player);

    virtual void rightDialogue();
    virtual void wrongDialogue();

};

#endif