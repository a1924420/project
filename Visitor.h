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
    int currentCapacity; // The current capacity of customers the pharmacy can hold
    int maxCapacity; // The maximum capacity of customers the pharmacy can hold
    std::vector<Customer>* visitors; // The array of customers that visit the pharmacy

    public:

    // Default constructor
    // Initialises visitor with both current and maximum capacity at zero
    Visitor(); 

    // Parameterised constructor
    // Initialises visitor with a given number for both current and maximum capacity
    Visitor(int currentCapacity, int maxCapacity);

    // Getter functions to access and return private variables

    // Returns the current capacity of customers in the visitors array
    int getCurrentCapacity();

    // Returns the maximum capacity of customers that the visitors array can hold
    int getMaxCapacity();

    // Returns the list of customers in the visitors array
    std::vector<Customer>* getVisitors();

    // Setter functions to modify private variables

    // Sets the current capacity of customers in the visitors array
    void setCurrentCapacity(int currentCapacity);

    // Sets the maximum capacity of customers that the visitors array can hold
    void setMaxCapacity(int maxCapacity);

    // Sets the list of customers in the visitors array
    void setVisitors(std::vector<Customer>& visitors);

    // Adds a new customer to the visitors array
    void addCustomer(Customer customer);

    // Removes a customer from the visitors array
    void removeCustomer(Customer customer);

};

#endif