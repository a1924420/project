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
        Medicine med;

        bool passed  = true;

        std::cout << "Medicine Name: " << med.getMedName() << std::endl;
        std::cout << "Medicine ID Number: " << med.getMedID() << std::endl;
        std::cout << "Medicine Description: " << med.getDescription() << std::endl;

        passed &= equalOrNot(med.getMedName(), " ");
        passed &= intEqualOrNot(med.getMedID(), 0);
        passed &= equalOrNot(med.getDescription(), " ");

        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    // Tests the parameterised constructor
    void testConstructor(){
        Medicine med("Panadol", 332528, "Treats pain and reduces fever");

        bool passed = true;

        std::cout << "Medicine Name: " << med.getMedName() << std::endl;
        std::cout << "Medicine ID Number: " << med.getMedID() << std::endl;
        std::cout << "Medicine Description: " << med.getDescription() << std::endl;

        passed &= equalOrNot(med.getMedName(), "Panadol");
        passed &= intEqualOrNot(med.getMedID(), 332528);
        passed &= equalOrNot(med.getDescription(), "Treats pain and reduces fever");

        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;

    }

    // Tests the getter and setter functions
    void testGettersAndSetters(){
        Medicine med;

        bool passed = true;

        med.setMedName("Adderall");
        med.setMedID(4036383);
        med.setDescription("Increases focus and controls behaviour problems");

        std::cout << "Medicine Name: " << med.getMedName() << std::endl;
        std::cout << "Medicine ID Number: " << med.getMedID() << std::endl;
        std::cout << "Medicine Description: " << med.getDescription() << std::endl;

        passed &= equalOrNot(med.getMedName(), "Adderall");
        passed &= intEqualOrNot(med.getMedID(), 4036383);
        passed &= equalOrNot(med.getDescription(), "Increases focus and controls behaviour problems");

        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    // Tests that the medicines can be modified from the default constructor
    void testModifyMedicine(){
        Medicine med;

        bool passed = true;

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

        std::cout << "Medicine Name: " << med.getMedName() << std::endl;
        std::cout << "Medicine ID: " << med.getMedID() << std::endl;
        std::cout << "Medicine Description: " << med.getDescription() << std::endl;

        passed &= equalOrNot(med.getMedName(), name);
        passed &= intEqualOrNot(med.getMedID(), medID);
        passed &= equalOrNot(med.getDescription(), description);

        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    bool equalOrNot(std::string actual, std::string expected){
        if (actual != expected){
            return false;
        }
        return true;
    }

    bool intEqualOrNot(int actual, int expected){
        if (actual != expected){
            return false;
        }
        return true;
    }

};

#endif