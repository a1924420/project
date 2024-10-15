#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"
#include "Police.h"

using namespace std;

Police::Police(){
    setName(" ");
    setAge(0);
    setID(0);
    setCorrectOrNot(false);
}

Police::Police(std::string name, int age, int ID, std::string illness, std::string medicalHistory){
    setName(name);
    setAge(age);
    setID(ID);
    setIllness(illness);
    setMedicalHistory(medicalHistory);

}

void Police::arrest(){
    cout << "Stop right there, you’ve been arrested for selling medication without a proper license!" << endl;
    exit(0); // ends game at this point - ends entire code run
}

void Police::rightDialogue(){
    cout << "Hmm okay, have a good day." << endl;
}
void Police::wrongDialogue(){
    cout << "Wait, so you do sell medicine here?" << endl;
    cout << "That's illegal!" << endl;
    arrest();
}
