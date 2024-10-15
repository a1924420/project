#include <iostream>
#include <string>
#include <vector>
#include "Patient.h"
#include "Police.h"
#include "Medicine.h"
#include "Player.h"
#include "Visitor.h"
#include "Customer.h"

// Default constructor
// Initialises visitor with both current and maximum capacity at zero
Visitor::Visitor(): currentCapacity(0), maxCapacity(0), visitors(new std::vector<Customer>()){}

// Parameterised constructor
// Initialises visitor with a given number for both current and maximum capacity
Visitor::Visitor(int currentCapacity, int maxCapacity): currentCapacity(currentCapacity), maxCapacity(maxCapacity), visitors(new std::vector<Customer>()) {}

// Getter for the current capacity of customers in the visitors array
int Visitor::getCurrentCapacity(){ return currentCapacity; }

// Getter for the maximum capacity of customers that the visitor array can hold
int Visitor::getMaxCapacity(){ return maxCapacity; }

// Getter for the list of customers in the visitors array
std::vector<Customer>* Visitor::getVisitors(){ return visitors; }

// Setter for the current capacity of customers in the visitors array 
void Visitor::setCurrentCapacity(int currentCapacity){
    this->currentCapacity = currentCapacity;
}

// Setter for the maximum capacity of customers that the visitor array can hold
void Visitor::setMaxCapacity(int maxCapacity){
    this->maxCapacity = maxCapacity;
}

// Setter for the list of customers in the visitors array
void Visitor::setVisitors(std::vector<Customer>& visitors){
    *(this->visitors) = visitors;
    currentCapacity = this->visitors->size();
}

// Adds a new customer to the visitors array
void Visitor::addCustomer(Customer customer){

    // Loop to add customer to visitors array
    if (currentCapacity < maxCapacity){
        // Add the customer to the visitors array
        Customer* newCustomer = new Customer(customer);
        visitors->push_back(*newCustomer);
        // Updates current capacity when customer is added
        currentCapacity = visitors->size();
        // Deleting newCustomer as content is already copied to vector
        delete newCustomer; 
    } else {
        std::cout << "Cannot add more customers. Max capacity reached." << std::endl;
    }

}

// Removes a  customer from the visitors array
void Visitor::removeCustomer(Customer customer){

    // Creating a new vector to hold customers that will remain after one is removed
    std::vector<Customer> newVisitors;

    // Iterating through the current list of customers
    for (int i = 0; i < currentCapacity; i++){

        // Add the customer to the new vector if their ID does not match that of the customer being removed
        if (visitors->at(i).getID() != customer.getID()){
            newVisitors.push_back(visitors->at(i));
        }
    }

    // Replace the current customers list with the new list excluding the removed customer
    *visitors = newVisitors;

    // Update the current capacity of customers in the visitors array to match the current vector size
    currentCapacity = visitors->size();
}