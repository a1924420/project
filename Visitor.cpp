#include <iostream>
#include <string>
#include <vector>
#include "Visitor.h"
#include "Customer.h"

// Default constructor
// Initialises visitor with both current and maximum capacity at zero
Visitor::Visitor(): currentCapacity(0), maxCapacity(0){}

// Parameterised constructor
// Initialises visitor with a given number for both current and maximum capacity
Visitor::Visitor(int currentCapacity, int maxCapacity): currentCapacity(currentCapacity), maxCapacity(maxCapacity) {}

// Getter for the current capacity of customers in the visitors array
// @return: returns the integer of the current capacity of customers in the visitors array
int Visitor::getCurrentCapacity(){ return currentCapacity; }

// Getter for the maximum capacity of customers that the visitor array can hold
// @return: returns the integer of the maximum capacity of customers that the visitor array can hold
int Visitor::getMaxCapacity(){ return maxCapacity; }

// Getter for the list of customers in the visitors array
// @return: returns the list of customers in the visitors array
std::vector<Customer> Visitor::getVisitors(){ return visitors; }

// Setter for the current capacity of customers in the visitors array 
// @param currentCapacity: new current capacity of customers in the visitors array
void Visitor::setCurrentCapacity(int currentCapacity){
    this->currentCapacity = currentCapacity;
}

// Setter for the maximum capacity of customers that the visitor array can hold
// @param maxCapacity: new maximum capacity of customers that the visitor array can hold
void Visitor::setMaxCapacity(int maxCapacity){
    this->maxCapacity = maxCapacity;
}

// Setter for the list of customers in the visitors array
// @param visitors: new list of customers in the visitors array
void Visitor::setVisitors(std::vector<Customer> visitors){
    this->visitors = visitors;
    currentCapacity = visitors.size();
}

// Adds a new customer to the visitors array
// @param customer: new customer being added to the visitors array
void Visitor::addCustomer(Customer customer){

    // Loop to add customer to visitors array
    if (currentCapacity < maxCapacity){
        // Add the customer to the visitors array
        visitors.push_back(customer);
        // Updates current capacity when customer is added
        currentCapacity++;
    } else {
        std::cout << "Cannot add more customers. Max capacity reached." << std::endl;
    }

}

// Removes a  customer from the visitors array
// @param customer: customer being removed from visitors array, identified by its ID number
void Visitor::removeCustomer(Customer customer){

    // Creating a new vector to hold customers that will remain after one is removed
    std::vector<Customer> newVisitors;

    // Iterating through the current list of customers
    for (int i = 0; i < currentCapacity; i++){

        // Add the customer to the new vector if their ID does not match that of the customer being removed
        if (visitors[i].getID() != customer.getID()){
            newVisitors.push_back(visitors[i]);
        }
    }

    // Replace the current customers list with the new list excluding the removed customer
    visitors = newVisitors;

    // Update the current capacity of customers in the visitors array to match the current vector size
    currentCapacity = visitors.size();
}