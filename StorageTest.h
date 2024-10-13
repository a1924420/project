#ifndef STORAGETEST_H
#define STORAGETEST_H

#include <iostream>
#include <string>
#include <vector>
#include "Medicine.h"
#include "Storage.h"

class StorageTest{

    public:

    // Runs all tests for storage class
    void runTests(){
        testDefault();
        std::cout << "\nDefault Test Complete.\n" << std::endl;
        testConstructor();
        std::cout << "\nConstructor Test Complete.\n" << std::endl;
        testGettersAndSetters();
        std::cout << "\nGetter and Setter Test Complete.\n" << std::endl;
        testAddMedicine();
        std::cout << "\nAdd Medicine Test Complete.\n" << std::endl;
        testRemoveMedicine();
        std::cout << "\nRemove Medicine Test Complete.\n" << std::endl;
    }

    private:

    // Tests the default constructor
    void testDefault(){

        // Sets default storage
        Storage storage;

        // Prints default number of medicines in storage
        std::cout << "Number of Medicines in Storage: " << storage.getNumOfMedicines() << std::endl;
    }

    // Tests the parameterised constructor
    void testConstructor(){

        // Sets medicine variables using constructor
        Medicine med1("Panadol", 332528, "Treats pain and reduces fever");

        Medicine med2("Xanax", 11375, "Treats anxiety");

        // Sets storage size to 2 using constructor
        Storage storage(2);

        // Setting and printing number of medicines that can fit in storage
        int num = storage.getNumOfMedicines();

        std::cout << "Number of Medicines: " << num << std::endl;

        // Adds medicines to storage
        storage.addMedicine(med1);

        storage.addMedicine(med2);

        // Prints medicine variables of all medicines in storage
        for (int i = 0; i < num; i++){
            Medicine med = storage.getMedicines()[i];
            std::cout << "Medicine " << i+1 << ":" << std::endl;
            std::cout << "Name: " << med.getMedName() << std::endl;
            std::cout << "ID Number: " << med.getMedID() << std::endl;
            std::cout << "Description: " << med.getDescription() << std::endl;
        }
    }

    // Tests the getter and setter functions
    void testGettersAndSetters(){

        // Sets medicine variables using constructor
        Medicine med1("Prolaxa", 948273, "Treats chronic digestive issues and helps regulate bowel movements");

        Medicine med2("Neurovex", 784329, "Used for alleviating nerve pain and reducing symptoms of neuropathy");

        Medicine med3("Cardiolyn", 562917, "Helps regulate blood pressure and supports heart health");

        // Creates default storage
        Storage storage;

        // Creates vector of medicines
        std::vector<Medicine> medList;
        medList.push_back(med1);
        medList.push_back(med2);
        medList.push_back(med3);

        // Sets storage to containing list of medicines stored in previous vector
        storage.setMedicines(medList);

        // Prints number of medicines in storage
        int num = storage.getNumOfMedicines();
        std::cout << "Number of Medicines: " << num << std::endl;

        // Prints list and variables of all medicines in storage
        for (int i = 0; i < num; i++){
            Medicine meds = storage.getMedicines()[i];
            std::cout << "Medicine " << i+1 << ":" << std::endl;
            std::cout << "Name: " << meds.getMedName() << std::endl;
            std::cout << "ID Number: " << meds.getMedID() << std::endl;
            std::cout << "Description: " << meds.getDescription() << std::endl;
        }
    }

    // Tests the function used to add a medicine to the array
    void testAddMedicine(){

        // Sets medicine variables using constructor
        Medicine med1("Panadol", 332528, "Treats pain and reduces fever");

        Medicine med2("Xanax", 11375, "Treats anxiety");

        // Sets storage size to 2 using constructor
        Storage storage(2);

        // Setting and printing number of medicines that can fit in storage
        int num = storage.getNumOfMedicines();

        std::cout << "Number of Medicines: " << num << std::endl;

        // Adds medicines to storage array
        storage.addMedicine(med1);

        storage.addMedicine(med2);

        // Prints list and variables of all medicines in storage
        for (int i = 0; i < num; i++){
            Medicine med = storage.getMedicines()[i];
            std::cout << "Medicine " << i+1 << ":" << std::endl;
            std::cout << "Name: " << med.getMedName() << std::endl;
            std::cout << "ID Number: " << med.getMedID() << std::endl;
            std::cout << "Description: " << med.getDescription() << std::endl;
        }

        std::cout << std::endl;

        std::cout << "New Medicine Added:" << std::endl;

        std::cout << std::endl;

        // Increases number of medicines that can fit into storage
        storage.setNumOfMedicines(3);

        num = storage.getNumOfMedicines();

        // Creating third medicine using constructor
        Medicine med3("Adderall", 4036383, "Increases focus and controls behaviour problems");

        // Adds new medicine to storage
        storage.addMedicine(med3);

        // Prints list and variables of all medicines in storage
        for (int i = 0; i < num; i++){
            Medicine med = storage.getMedicines()[i];
            std::cout << "Medicine " << i+1 << ":" << std::endl;
            std::cout << "Name: " << med.getMedName() << std::endl;
            std::cout << "ID Number: " << med.getMedID() << std::endl;
            std::cout << "Description: " << med.getDescription() << std::endl;
        }
    }

    // Tests the function used to remove a medicine from the array
    void testRemoveMedicine(){

        // Sets medicine variables using constructor
        Medicine med1("Panadol", 332528, "Treats pain and reduces fever");

        Medicine med2("Xanax", 11375, "Treats anxiety");

        Medicine med3("Adderall", 4036383, "Increases focus and controls behaviour problems");

        // Sets default storage
        Storage storage;

        // Adds medicines to storage
        storage.addMedicine(med1);

        storage.addMedicine(med2);

        storage.addMedicine(med3);

        // Prints list and variables of all medicines in storage
        for (int i = 0; i < storage.getNumOfMedicines(); i++){
            Medicine med = storage.getMedicines()[i];
            std::cout << "Medicine " << i+1 << ":" << std::endl;
            std::cout << "Name: " << med.getMedName() << std::endl;
            std::cout << "ID Number: " << med.getMedID() << std::endl;
            std::cout << "Description: " << med.getDescription() << std::endl;
        }

        // Removes medicine from storage array
        storage.removeMedicine(med2);

        std::cout << std::endl;

        std::cout << "Medicine 2 Removed:" << std::endl;

        std::cout << std::endl;

        // Displays current number of medicines in array
        std::cout << "Number of Medicines: " << storage.getNumOfMedicines() << std::endl;

        // Prints list and variables of all medicines in storage
        for (int i = 0; i < storage.getNumOfMedicines(); i++){
            Medicine meds = storage.getMedicines()[i];
            std::cout << "Medicine " << i+1 << ":" << std::endl;
            std::cout << "Name: " << meds.getMedName() << std::endl;
            std::cout << "ID Number: " << meds.getMedID() << std::endl;
            std::cout << "Description: " << meds.getDescription() << std::endl;
        }
    }

};

#endif