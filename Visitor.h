#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>
#include <vector>
#include "Patient.h"
#include "Police.h"
#include "Medicine.h"
#include "Player.h"
#include "Customer.h"

/* Visitor class manages a collection of customers, 
and includes functions to add, remove and access them. */
class Visitor{

    private:

    // Private variables used to store the visitor's details
    int currentCapacity; 
    int maxCapacity; 
    std::vector<Customer>* visitors; 

    public:

    // Default constructor
    Visitor(); 

    // Parameterised constructor
    Visitor(int currentCapacity, int maxCapacity);

    // Getter functions to access and return private variables

    int getCurrentCapacity();

    int getMaxCapacity();

    std::vector<Customer>* getVisitors();

    // Setter functions to modify private variables

    void setCurrentCapacity(int currentCapacity);

    void setMaxCapacity(int maxCapacity);

    void setVisitors(std::vector<Customer>& visitors);

    // Adds a new customer to the visitors array
    void addCustomer(Customer customer);

    // Removes a customer from the visitors array
    void removeCustomer(Customer customer);

};

#endif