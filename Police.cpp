#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"
#include "Police.h"

using namespace std;
// Initailaises the police officer
Police::Police(){
    setName(" ");
    setAge(0);
    setID(0);
    setCorrectOrNot(false);
}
// Initailaises the police officer
Police::Police(std::string name, int age, int ID, std::string illness, std::string medicalHistory){
    setName(name);
    setAge(age);
    setID(ID);
    setIllness(illness);
    setMedicalHistory(medicalHistory);

}
// Arrests the player 
void Police::arrest(){
    cout << "Stop right there, you’ve been arrested for selling medication without a proper license!" << endl;
    exit(0); // ends game at this point - ends entire code run
}
//This is said by the police officer when the player denies the police.
void Police::rightDialogue(){
    cout << "Hmm okay, have a good day." << endl;
}
// This is the wrong dialogue that will be output when the police catch the player
void Police::wrongDialogue(){
    cout << "Wait, so you do sell medicine here?" << endl;
    cout << "That's illegal!" << endl;
    arrest();
}
