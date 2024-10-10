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
        Visitor visitors;

        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;

    }

    // Tests the parameterised constructor
    void testConstructor(){
        Customer c1("Alice Johnson", 28, 10234);

        Customer c2("Michael Roberts", 35, 56789);

        Visitor visitors(0, 2);

        visitors.addCustomer(c1);

        visitors.addCustomer(c2);

        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()[i];
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;
    }

    // Tests the getter and setter functions
    void testGettersAndSetters(){
        
        Customer c1("Emily Davis", 22, 78901);

        Customer c2("David Smith", 40, 45321);

        Customer c3("Sarah Lee", 31, 90234);

        Visitor visitors(0, 3);

        std::vector<Customer> customerList;
        customerList.push_back(c1);
        customerList.push_back(c2);
        customerList.push_back(c3);

        visitors.setVisitors(customerList);

        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;

        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()[i];
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }
    }

    // Tests the function used to add a customer to the array
    void testAddCustomer(){
        Customer c1("Emily Davis", 22, 78901);

        Customer c2("Michael Roberts", 35, 56789);

        Visitor visitors(0, 3);

        visitors.addCustomer(c1);

        visitors.addCustomer(c2);

        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()[i];
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;

        std::cout << std::endl;

        std::cout << "New Customer Added:" << std::endl;

        std::cout << std::endl;

        Customer c3("James Wilson", 45, 12098);

        visitors.addCustomer(c3);

        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()[i];
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;
    }

    // Tests the function used to remove a customer from the array
    void testRemoveCustomer(){
        Customer c1("Emily Davis", 22, 78901);

        Customer c2("David Smith", 40, 45321);

        Customer c3("Sarah Lee", 31, 90234);

        Visitor visitors(0, 3);

        visitors.addCustomer(c1);

        visitors.addCustomer(c2);

        visitors.addCustomer(c3);

        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()[i];
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;

        visitors.removeCustomer(c2);

        std::cout << std::endl;

        std::cout << "Customer 2 Removed:" << std::endl;

        std::cout << std::endl;

        for (int i = 0; i < visitors.getCurrentCapacity(); i++){
            Customer customer = visitors.getVisitors()[i];
            std::cout << "Customer " << i+1 << ":" << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "ID Number: " << customer.getAge() << std::endl;
            std::cout << "Description: " << customer.getID() << std::endl;
        }

        std::cout << "Current Number of Visitors: " << visitors.getCurrentCapacity() << std::endl;
        std::cout << "Maximum Number of Visitors: " << visitors.getMaxCapacity() << std::endl;
    }
};

#endif