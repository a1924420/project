#ifndef POLICE_H
#define POLICE_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"


class Police: public Customer{

    private:

    std::string medicalHistory;

    public:

    Police();

    Police(std::string name, int age, int ID, std::string illness, std::string medicalHistory);

    void rightDialogue();
    void wrongDialogue();
    static void arrest();

};

#endif