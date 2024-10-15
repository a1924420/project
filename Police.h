#ifndef POLICE_H
#define POLICE_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"


class Police: public Customer{

    private:

    public:
    // Default constructor
    Police();
    // Parameterised constructor
    Police(std::string name, int age, int ID, std::string illness, std::string medicalHistory);
    // Member function for the dialogue when the player denies the police officer the medication 
    void rightDialogue();
    // Member function for the dialogue when the player gives the medication to the police officer
    void wrongDialogue();
    // Funtion for when the player is arrested for giving the the medication to the police officer
    static void arrest();

};

#endif
