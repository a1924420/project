#include <iostream>
#include <string>
#include <vector>
#include "Medicine.h"
#include "Storage.h"

int main(){

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

    std::cout << std::endl;

    std::cout << "Storage Changed:" << std::endl;

    std::cout << std::endl;

    Medicine med4("Prolaxa", 948273, "Treats chronic digestive issues and helps regulate bowel movements");

    Medicine med5("Neurovex", 784329, "Used for alleviating nerve pain and reducing symptoms of neuropathy");

    Medicine med6("Cardiolyn", 562917, "Helps regulate blood pressure and supports heart health");

    std::vector<Medicine> medList;
    medList.push_back(med4);
    medList.push_back(med5);
    medList.push_back(med6);

    Storage newStorage;

    newStorage.setMedicines(medList);

    int newNum = newStorage.getNumOfMedicines();
    std::cout << "Number of Medicines: " << newNum << std::endl;

    for (int i = 0; i < newNum; i++){
        Medicine meds = newStorage.getMedicines()[i];
        std::cout << "Medicine " << i+1 << ":" << std::endl;
        std::cout << "Name: " << meds.getMedName() << std::endl;
        std::cout << "ID Number: " << meds.getMedID() << std::endl;
        std::cout << "Description: " << meds.getDescription() << std::endl;
    }

    return 0;

}