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
        Storage storage;

        std::cout << "Number of Medicines in Storage: " << storage.getNumOfMedicines() << std::endl;
    }

    // Tests the parameterised constructor
    void testConstructor(){
        Medicine med1("Panadol", 332528, "Treats pain and reduces fever");

        Medicine med2("Xanax", 11375, "Treats anxiety");

        Storage storage(2);

        int num = storage.getNumOfMedicines();

        std::cout << "Number of Medicines: " << num << std::endl;

        storage.addMedicine(med1);

        storage.addMedicine(med2);

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
        Medicine med1("Prolaxa", 948273, "Treats chronic digestive issues and helps regulate bowel movements");

        Medicine med2("Neurovex", 784329, "Used for alleviating nerve pain and reducing symptoms of neuropathy");

        Medicine med3("Cardiolyn", 562917, "Helps regulate blood pressure and supports heart health");

        Storage storage;

        std::vector<Medicine> medList;
        medList.push_back(med1);
        medList.push_back(med2);
        medList.push_back(med3);

        storage.setMedicines(medList);

        int num = storage.getNumOfMedicines();
        std::cout << "Number of Medicines: " << num << std::endl;

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
        Medicine med1("Panadol", 332528, "Treats pain and reduces fever");

        Medicine med2("Xanax", 11375, "Treats anxiety");

        Storage storage(2);

        int num = storage.getNumOfMedicines();

        std::cout << "Number of Medicines: " << num << std::endl;

        storage.addMedicine(med1);

        storage.addMedicine(med2);

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

        storage.setNumOfMedicines(3);

        num = storage.getNumOfMedicines();

        Medicine med3("Adderall", 4036383, "Increases focus and controls behaviour problems");

        storage.addMedicine(med3);

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
        Medicine med1("Panadol", 332528, "Treats pain and reduces fever");

        Medicine med2("Xanax", 11375, "Treats anxiety");

        Medicine med3("Adderall", 4036383, "Increases focus and controls behaviour problems");

        Storage storage;

        storage.addMedicine(med1);

        storage.addMedicine(med2);

        storage.addMedicine(med3);

        for (int i = 0; i < storage.getNumOfMedicines(); i++){
            Medicine med = storage.getMedicines()[i];
            std::cout << "Medicine " << i+1 << ":" << std::endl;
            std::cout << "Name: " << med.getMedName() << std::endl;
            std::cout << "ID Number: " << med.getMedID() << std::endl;
            std::cout << "Description: " << med.getDescription() << std::endl;
        }

        storage.removeMedicine(med2);

        std::cout << std::endl;

        std::cout << "Medicine 2 Removed:" << std::endl;

        std::cout << std::endl;

        std::cout << "Number of Medicines: " << storage.getNumOfMedicines() << std::endl;

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