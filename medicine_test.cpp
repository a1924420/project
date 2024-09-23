#include <iostream>
#include <string>
#include "Medicine.h"

int main(){

    Medicine med1("Panadol", 332528, "Treats pain and reduces fever");

    std::cout << "Medicine 1 Name: " << med1.getMedName() << std::endl;
    std::cout << "Medicine 1 ID Number: " << med1.getMedID() << std::endl;
    std::cout << "Medicine 1 Description: " << med1.getDescription() << std::endl;

    Medicine med2("Xanax", 11375, "Treats anxiety");

    std::cout << "Medicine 2 Name: " << med2.getMedName() << std::endl;
    std::cout << "Medicine 2 ID Number: " << med2.getMedID() << std::endl;
    std::cout << "Medicine 2 Description: " << med2.getDescription() << std::endl;

    Medicine med3;

    std::cout << "Unidentified Medicine: " << std::endl;

    std::cout << "Medicine 3 Name: " << med3.getMedName() << std::endl;
    std::cout << "Medicine 3 ID Number: " << med3.getMedID() << std::endl;
    std::cout << "Medicine 3 Description: " << med3.getDescription() << std::endl;

    med3.setMedName("Adderall");
    med3.setMedID(4036383);
    med3.setDescription("Increases focus and controls behaviour problems");

    std::cout << "Identified Medicine: " << std::endl;

    std::cout << "Medicine 3 Name: " << med3.getMedName() << std::endl;
    std::cout << "Medicine 3 ID Number: " << med3.getMedID() << std::endl;
    std::cout << "Medicine 3 Description: " << med3.getDescription() << std::endl;

    return 0;

}