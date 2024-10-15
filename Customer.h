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
    std::string medicalHistory;

    public:
// Default constructor
    Customer();
//// Parameterised constructor
    Customer(std::string name, int age, int ID);
//// Parameterised constructor
    Customer(std::string name, int age, int ID, std::string illness, std::string medicalHistory);
//Gets the name for the customer
    std::string getName();
//  Gets the age of the customer
    int getAge();
// Gets the illness from the customer
    std::string getIllness();
//Gets the medical history of the customer
    std::string getMedicalHistory();
//Sets the name of the customer
    void setName(std::string name);
//Sets the age of the customer
    void setAge(int age);
//Gets the ID from the customer
    int getID();
//Sets the ID of the customer
    void setID(int ID);
//Sets the illness of the customer
    void setIllness(std::string illness);
//Sets the medical History of the customer
    void setMedicalHistory(std::string medicalHistory);
//Gets the check if the correct medication was distributed to the correct person
    bool getCorrectOrNot();
//Sets if the correct medication was distributed to the correct person
    void setCorrectOrNot(bool correctOrNot);
//Checks  the customer details
    void checker(Medicine med, Patient patient, Player player);
// Outputs the dialogue when the customer arrives
    void greetingDialogue(Customer customer);

// Member function for the dialogue when the player gives the correct medication
    virtual void rightDialogue();
// Member function for the dialogue when the player gives the wrong medication 
    virtual void wrongDialogue();

};

#endif
