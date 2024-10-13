#ifndef MEDICINETEST_H
#define MEDICINETEST_H

#include <iostream>
#include <string>
#include "Medicine.h"

class MedicineTest{

    public:

    // Runs all tests for medicine class
    void runTests(){
        testDefault();
        std::cout << "\nDefault Test Complete.\n" << std::endl;
        testConstructor();
        std::cout << "\nConstructor Test Complete.\n" << std::endl;
        testGettersAndSetters();
        std::cout << "\nGetters and Setters Test Complete.\n" << std::endl;
        testModifyMedicine();
        std::cout << "\nModify Medicine Test Complete.\n" << std::endl;
    }

    private:

    // Tests the default constructor
    void testDefault(){

        // Creates default medicine
        Medicine med;

        // Sets passed as initially true so it only changes if a test is failed
        bool passed  = true;

        // Prints default variables
        std::cout << "Medicine Name: " << med.getMedName() << std::endl;
        std::cout << "Medicine ID Number: " << med.getMedID() << std::endl;
        std::cout << "Medicine Description: " << med.getDescription() << std::endl;

        // Checks default variable are as expected
        passed &= equalOrNot(med.getMedName(), " ");
        passed &= intEqualOrNot(med.getMedID(), 0);
        passed &= equalOrNot(med.getDescription(), " ");

        // States if the test has been passed or failed
        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    // Tests the parameterised constructor
    void testConstructor(){

        // Constructs medicine with set variables
        Medicine med("Panadol", 332528, "Treats pain and reduces fever");

        bool passed = true;

        // Prints set variables for medicine
        std::cout << "Medicine Name: " << med.getMedName() << std::endl;
        std::cout << "Medicine ID Number: " << med.getMedID() << std::endl;
        std::cout << "Medicine Description: " << med.getDescription() << std::endl;

        // Checks the set variables match the output
        passed &= equalOrNot(med.getMedName(), "Panadol");
        passed &= intEqualOrNot(med.getMedID(), 332528);
        passed &= equalOrNot(med.getDescription(), "Treats pain and reduces fever");

        // States if the test has been passed or failed
        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;

    }

    // Tests the getter and setter functions
    void testGettersAndSetters(){

        Medicine med;

        bool passed = true;

        // Sets medicine variables using setter functions
        med.setMedName("Adderall");
        med.setMedID(4036383);
        med.setDescription("Increases focus and controls behaviour problems");

        // Prints set medicine variables using getter functions 
        std::cout << "Medicine Name: " << med.getMedName() << std::endl;
        std::cout << "Medicine ID Number: " << med.getMedID() << std::endl;
        std::cout << "Medicine Description: " << med.getDescription() << std::endl;

        // Checks the set variables match the output
        passed &= equalOrNot(med.getMedName(), "Adderall");
        passed &= intEqualOrNot(med.getMedID(), 4036383);
        passed &= equalOrNot(med.getDescription(), "Increases focus and controls behaviour problems");

        // States if the test has been passed or failed
        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    // Tests that the medicines can be modified from the default constructor
    void testModifyMedicine(){
        Medicine med;

        bool passed = true;

        // Takes user input and sets medicine variables
        std::string name;
        std::cout << "Enter new medicine name: " << std::endl;
        std::getline(std::cin, name);
        med.setMedName(name);

        int medID;
        std::cout << "Enter new medicine ID: " << std::endl;
        std::cin >> medID;
        med.setMedID(medID);

        std::cin.ignore();

        std::string description;
        std::cout << "Enter new medicine description: " << std::endl;
        std::getline(std::cin, description);
        med.setDescription(description);

        // Prints medicine variables set by user input
        std::cout << "Medicine Name: " << med.getMedName() << std::endl;
        std::cout << "Medicine ID: " << med.getMedID() << std::endl;
        std::cout << "Medicine Description: " << med.getDescription() << std::endl;

        // Checks user input matches set output
        passed &= equalOrNot(med.getMedName(), name);
        passed &= intEqualOrNot(med.getMedID(), medID);
        passed &= equalOrNot(med.getDescription(), description);

        // States if the test has been passed or failed
        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    // Takes in string variables to check the expected output matches the real output
    bool equalOrNot(std::string actual, std::string expected){
        if (actual != expected){
            return false;
        }
        return true;
    }

    // Takes in integer variables to check the expected output matches the real output
    bool intEqualOrNot(int actual, int expected){
        if (actual != expected){
            return false;
        }
        return true;
    }

};

#endif