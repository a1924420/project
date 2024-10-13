#include "CustomerTest.h"
#include "Customer.h"
#include "Patient.h"
#include "Medicine.h"
#include "Player.h"

// Test constructor with default values
void testDefaultConstructor() {
    Customer customer;
    std::cout << "Testing Default Constructor:\n";
    std::cout << "Customer Name: " << customer.getName() << "\n"; 
    std::cout << "Customer Age: " << customer.getAge() << "\n"; 
    std::cout << "Customer ID: " << customer.getID() << "\n"; 
    std::cout << "Customer Illness: " << customer.getIllness() << "\n"; 
    std::cout << "Customer Medical History: " << customer.getMedicalHistory() << "\n"; 
    std::cout << std::endl;
}

// Test constructor with parameters
void testParameterizedConstructor() {
    Customer customer("Snow", 30, 1, "Flu", "None");
    std::cout << "Testing Parameterized Constructor:\n";
    std::cout << "Customer Name: " << customer.getName() << "\n"; 
    std::cout << "Customer Age: " << customer.getAge() << "\n"; 
    std::cout << "Customer ID: " << customer.getID() << "\n"; 
    std::cout << "Customer Illness: " << customer.getIllness() << "\n"; 
    std::cout << "Customer Medical History: " << customer.getMedicalHistory() << "\n"; 
    std::cout << std::endl;
}

// Test getter and setter methods
void testGettersAndSetters() {
    Customer customer;
    customer.setName("Herb");
    customer.setAge(45);
    customer.setID(456);
    customer.setIllness("Cold");
    customer.setMedicalHistory("Asthma");

    std::cout << "Testing Getters and Setters:\n";
    std::cout << "Customer Name: " << customer.getName() << "\n"; 
    std::cout << "Customer Age: " << customer.getAge() << "\n"; 
    std::cout << "Customer ID: " << customer.getID() << "\n"; 
    std::cout << "Customer Illness: " << customer.getIllness() << "\n"; 
    std::cout << "Customer Medical History: " << customer.getMedicalHistory() << "\n"; 
    std::cout << std::endl;
}

// Test the checker function (interaction between Customer, Medicine, and Patient)
void testChecker() {
    Customer customer("Spice", 40, 789, "Hayfever", "No Medical History");
    Medicine med(101); 
    Patient patient;
    patient.setPrescriptionID(101); 
    Player player;
    player.setScore(50);
}

// Main function to run all tests
int main() {
    testDefaultConstructor();
    testParameterizedConstructor();
    testGettersAndSetters();
    testChecker();

    return 0;
}
