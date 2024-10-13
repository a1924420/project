#ifndef VISITORTEST_H
#define VISITORTEST_H

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Customer.h"
#include "Patient.h"
#include "Police.h"
#include "Medicine.h"
#include "Player.h"
#include "Visitor.h"

class VisitorTest{

    public:

    // Runs all tests for visitor class
    void runTests(){
        testDefault();
        std::cout << "\nDefault Test Complete.\n" << std::endl;
        testConstructor();
        std::cout << "\nConstructor Test Complete.\n" << std::endl;
        testGettersAndSetters();
        std::cout << "\nGetter and Setter Test Complete.\n" << std::endl;
        testAddCustomer();
        std::cout << "\nAdd Customer Test Complete.\n" << std::endl;
        testRemoveCustomer();
        std::cout << "\nRemove Customer Test Complete.\n" << std::endl;
    }

    private:

    // Tests the default constructor
    void testDefault(){

        // Creates default visitors
        Visitor visitors;

        // Prints default current and max number of visitors
        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;

    }

    // Tests the parameterised constructor
    void testConstructor(){

        // Creates customers using constructor
        Customer c1("Alice Johnson", 28, 10234);

        Customer c2("Michael Roberts", 35, 56789);

        // Creates visitors with constructor and with default current and max number of visitors
        Visitor visitors(0, 2);

        // Adds customers to visitors array
        visitors.addCustomer(c1);

        visitors.addCustomer(c2);

        // Prints customer variables of all customers in visitors
        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()->at(i);
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        // Prints current and max number of visitors in array
        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;
    }

    // Tests the getter and setter functions
    void testGettersAndSetters(){
        
        // Creates customers using constructor
        Customer c1("Emily Davis", 22, 78901);

        Customer c2("David Smith", 40, 45321);

        Customer c3("Sarah Lee", 31, 90234);

        // Creates visitors with constructor and with default current and max number of visitors
        Visitor visitors(0, 3);

        // Creates array of customers and adds constructed customers to array
        std::vector<Customer> customerList;
        customerList.push_back(c1);
        customerList.push_back(c2);
        customerList.push_back(c3);

        // Sets visitors array to previously made array of customers
        visitors.setVisitors(customerList);

        // Prints current and max number of visitors in array
        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;

        // Prints customer variables of all customers in visitors
        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()->at(i);
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }
    }

    // Tests the function used to add a customer to the array
    void testAddCustomer(){

        // Creates customers using constructor
        Customer c1("Emily Davis", 22, 78901);

        Customer c2("Michael Roberts", 35, 56789);

        // Creates visitors with constructor and with default current and max number of visitors
        Visitor visitors(0, 3);

        // Adds customers to visitors array
        visitors.addCustomer(c1);

        visitors.addCustomer(c2);

        // Prints customer variables of all customers in visitors
        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()->at(i);
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        // Prints current and max number of visitors in array
        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;

        std::cout << std::endl;

        std::cout << "New Customer Added:" << std::endl;

        std::cout << std::endl;

        // Creates third customer with constructor
        Customer c3("James Wilson", 45, 12098);

        // Adds third customer to array
        visitors.addCustomer(c3);

        // Prints customer variables of all customers in visitors
        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()->at(i);
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        // Prints current and max number of visitors in array
        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;
    }

    // Tests the function used to remove a customer from the array
    void testRemoveCustomer(){

        // Creates customers using constructor
        Customer c1("Emily Davis", 22, 78901);

        Customer c2("David Smith", 40, 45321);

        Customer c3("Sarah Lee", 31, 90234);

        // Creates visitors with constructor and with default current and max number of visitors
        Visitor visitors(0, 3);

        // Adds customers to visitors array
        visitors.addCustomer(c1);

        visitors.addCustomer(c2);

        visitors.addCustomer(c3);

        // Prints customer variables of all customers in visitors
        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()->at(i);
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        // Prints current and max number of visitors in array
        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;

        // Removes customer from visitors array
        visitors.removeCustomer(c2);

        std::cout << std::endl;

        std::cout << "Customer 2 Removed:" << std::endl;

        std::cout << std::endl;

        // Prints customer variables of all customers in visitors
        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()->at(i);
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        // Prints current and max number of visitors in array
        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;
    }
};

#endif