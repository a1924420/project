#include "Person.h"
#include "Player.h"
#include "Customer.h"
#include "Patient.h"
#include "Police.h"
#include "Game.h"
#include "Medicine.h"
#include "Storage.h"
#include "EndScene.h"
#include "Visitor.h"

// This document is designed to be a rough draft for the final game

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    Game game("Backyard Pharmacy", "38 SnifferDogg Studios", "Skag Horse Entertainment", "15/10/2024", "Dark Comedy");
    string action = "storage"; // player action, default value is nothing
    int menu = 4; // menu state; 0 to quit, 1 for instructions, 2 for about, 3 for start, 4 for default

    while (menu != 3){
        cout << "For 'How to Play': Enter 1" << endl;
        cout << "For 'About Game': Enter 2" << endl;
        cout << "For 'Start Game': Enter 3" << endl;
        cout << "To quit: Enter 0" << endl;

        cin >> menu;
        cin.ignore();

        if (menu == 1){
            cout << "Here be instructions: \n" 
            << "You're playing as a pharmacist and your job is to deliver medicine to patients. \n"
            << "To do so, heed your patients' description of their ailments and match them up with the right meds. \n"
            << "Be warned though! Some patients are not what they seem... \n"
            << "If you feel something is off, deny them! Undercover cops are around every corner. \n"
            << "Be sure to get medicine to as many patients as possible without giving one to a cop. \n"
            << "Otherwise you may find that something unpleasant will happen... \n\n"
            << "Here are the actions you can execute, make sure you DO NOT use capital letters: \n \n" // actions
            << "Enter 'age' to ask for the current customer's age. \n"
            << "Enter 'medhist' to ask for the current customer's medical history. \n"
            << "Enter 'storage' to view all the medicines available in storage in your storage. \n"
            << "Enter 'sell' to sell the current customer a medicine available in storage. \n"
            << "Enter 'deny' to refuse service to the current customer and make them leave the pharmacy. \n"
            << "Enter 'menu' to return to the menu. \n"
            << "Good luck! \n";

        } else if (menu == 2){
            cout << "Name:         " << game.getName() << endl;
            cin.get();
            cout << "Developers:   " << game.getDevelopers() << endl;
            cin.get();
            cout << "Publisher:    " << game.getPublisher() << endl;
            cin.get();
            cout << "Release Date: " << game.getReleaseDate() << endl;
            cin.get();
            cout << "Genre:        " << game.getGenre() << endl;
            cin.get();
            cout << endl;
        } 
        
        else if (menu == 3) {
            break;
        } 

        else if (menu == 0) {
            return 0;
        }
        
        else {
            cout << "Invalid input, please enter 1, 2 or 3: " << endl;
        }
    } 
    
    // end menu intro

    cout << "The game has begun." << endl;

    string name = ""; 
    int age = 0; 

    // getting name and age from user 
    cout << "What is your name? \n";
    cin >> name;

    while (name.length() > 12 || name.length() < 1) { // if name is too long/short 
        cout << "Your name must be between 1 and 12 characters. \n";
        cin.ignore(365, '\n');
        cin >> name;
    }
    
    cout << "What is your age? \n";

    while (!(cin >> age) || (age < 0)) { // if input is not numerical or negative
        cout << "Try again. \n";
        cin.clear();
        cin.ignore(365, '\n');
    }

    Player user(name, age, 0, 0);

    string answer = ""; // initialised with default value 

    // prologue intro plays 
    cout << "It's a beautiful day outside and you're a terrible student. \n"
    << "Your name is " << user.getName() << " and you're " << user.getAge() << " years young. \n"
    << "Today, you're starting your new job as a real pharmacist. \n"
    << "What wonders will await you on your first shift? \n" 
    << "You ponder that as you open your backdoor and enter your backyard. \n"
    << "Which also happens to be your new workspace. \n"
    << "That's right... you're a backyard pharmacist! \n";

    cout << "Now, are you ready to start? \n"
    << "Type 'yes' or 'no'.";

    cin >> answer;

    while (answer != "yes" && answer != "no") { // while answer is not yes, but also not no
        if (answer == "maybe") {
            cout << "What are you, indecisive? \n";
        }

        else {
            cout << "It's a yes or no question. \n";
        }

        cin >> answer;  
    }

    if (answer == "yes") {
        cout << "Great job! \n" 
        << "Let's get you to your first customer. \n"
        << "They're coming through the unlocked side entrance that leads into your kitchen now. \n";
    }

    else if (answer == "no") {
        cout << "Why did you open this game then? \n";
        return 0;
    }

    else {
        cout << "Unknown error: aborting.";
        return 0;
    }

    // creating visitor objects according to name, age, id, and dialogue
    Patient p1("Piper", 15, 1, "My head feels like it's going to explode! I'm in so much pain! HELP ME!!!", "Mild headaches and hypochondria.", 0);
    Patient p2("Tai", 0, 2, "I swear I'm always panicking, please get me something that'll calm me down, quick!", "Self-diagnosed severe anxiety disorder, and self-diagnosed everything really.", 0);
    Patient p3("Doop-Snogg", 52, 3, "The (cough) more medicated (cough), the more dedicated (cough).", "Mild cough, but it ain't Mary Jane's fault ya feel me dawg.", 0);
    Patient p4("Ecstasy", 25, 4, "I've been feeling really sad ever since the Queen died. Bless her heart. Can you help me?", "Depression and PTSD.", 0);
    Patient p5("Euphoria", 39, 5, "I need a medication, but it's really embarrassing... I think it rhymes with something mide.", "Diarrhea and constipation.", 0);
    Police officer1("Snow", 30, 0, "I'm just really sad all the time, I might be depressed.", "Previously broke right arm due to accident.");
    Police officer2("Herb", 78, 0, "I feel really dizzy when I stand and I'm cold all the time." , "None.");
    Police officer3("Spice", 17, 0, "My doctor says I have high cholesterol levels.", "Has family history of high cholesterol and heart attacks.");

    Visitor visitors(0, 8);

    // adding visitors to the array 
    visitors.addCustomer(p3);
    visitors.addCustomer(officer3);
    visitors.addCustomer(p4);
    visitors.addCustomer(officer2);
    visitors.addCustomer(p1);
    visitors.addCustomer(p5);
    visitors.addCustomer(officer1);
    visitors.addCustomer(p2);

    // creating medicine objects according to name, id, and description
    Medicine med1("Panadol", 5, "Treats pain and reduces fever");
    Medicine med2("Xanax", 8, "Treats anxiety");
    Medicine med3("Fluoxetine", 3, "Antidepressesant");
    Medicine med4("Loperamide", 6, "Treats diahrrea");
    Medicine med5("Dihydrocodeine", 1, "Treats dry coughs");

    Storage storage(5);

    // adding medicines to array 
    storage.addMedicine(med1);
    storage.addMedicine(med2);
    storage.addMedicine(med3);
    storage.addMedicine(med4);
    storage.addMedicine(med5);

    for (int i = 0; i < visitors.getCurrentCapacity(); i++){
        Customer customer = visitors.getVisitors()->at(i); // fetch customer aligned with current index
        
        customer.greetingDialogue(customer);
        cout << customer.getIllness() << endl;

        while (true) {
            cout << "Enter what you would like to do! Remember, you can go back to the menu at any time." << endl;
            
            /*cin.clear();
            cin.ignore(365, '\n');
            getline(cin, action);*/
            cin >> action;

            if (action == "age"){ // ask for customer age
                if (customer.getAge() == 0) {
                    cout << "That's not very nice. Do you think I look old?" << endl;
                } 
                
                else {
                    cout << "My age is " << customer.getAge() << endl;
                }
            } 
            
            else if (action == "medhist"){ // ask for medical history
                cout << customer.getMedicalHistory() << endl;
            } 
            
            else if (action == "storage") { // see medicines able to be sold
                for (int i = 0; i < storage.getNumOfMedicines(); i++){
                    Medicine med = storage.getMedicines()[i];
                    cout << "Medicine " << i+1 << ":" << endl;
                    cout << "Name: " << med.getMedName() << endl;
                    cout << "Description: " << med.getDescription() << "\n" << endl;
                }
            } 
            
            else if (action == "sell"){
                if (customer.getID() == 0){ // if user sells to a police officer 
                    Police police;
                    customer = police;
                    police.wrongDialogue();
                } 
                
                else {
                    Patient patient; // new Patient object called "patient"
                    customer = patient;

                    patient.setPrescriptionID(i+1);

                    string med = "med1";

                    bool sellInProgress = true; // if currently in process of selling
                    while (sellInProgress == true){

                    cout << "Which medicine are you selling to this patient?" << endl;

                    cout << "Enter 'med1' to sell medicine 1 to patient. \n"
                    << "Enter 'med2' to sell medicine 2 to patient. \n"
                    << "Enter 'med3' to sell medicine 3 to patient. \n"
                    << "Enter 'med4' to sell medicine 4 to patient. \n"
                    << "Enter 'med5' to sell medicine 5 to patient. \n"
                    << "Enter 'storage' to view storage again. \n";

                    cin >> med;

                        if (med == "med1"){
                            customer.checker(med1, patient, user);
                            sellInProgress = false;
                        } 
                        
                        else if (med == "med2"){
                            customer.checker(med2, patient, user);
                            sellInProgress = false;
                        } 
                        
                        else if (med == "med3"){
                            customer.checker(med3, patient, user);
                            sellInProgress = false;
                        } 
                        
                        else if (med == "med4"){
                            customer.checker(med4, patient, user);
                            sellInProgress = false;
                        } 
                        
                        else if (med == "med5"){
                            customer.checker(med5, patient, user);
                            sellInProgress = false;
                        } 
                        
                        else if (med == "storage"){
                            for (int i = 0; i < storage.getNumOfMedicines(); i++){
                                Medicine med = storage.getMedicines()[i];
                                cout << "Medicine " << i+1 << ":" << endl;
                                cout << "Name: " << med.getMedName() << endl;
                                cout << "Description: " << med.getDescription() << "\n" << endl;
                            }
                        } 
                        
                        else {
                            cout << "Invalid medicine input. Check your spelling, or enter \"menu\" to see how to play again." << endl;
                        }
                    }
                }
                break;
            } 
            
            else if (action == "deny"){
                cout << "'No prescription medicines are sold in this establishment,' you say." << endl;
                if (customer.getID() == 0){
                    Police police;
                    customer = police;
                    police.rightDialogue();
                } 
                
                else {
                    Patient patient;
                    customer = patient;
                    patient.wrongDialogue();
                }

                break;
            } 
            
            else if (action == "menu"){
                int menu;

                while (menu != 3){
                    cout << "These are all the actions you can take: \n"
                    << "Enter 'age' to ask for the current customer's age. \n"
                    << "Enter 'medhist' to ask for the current customer's medical history. \n"
                    << "Enter 'storage' to view all the medicines available in storage in your storage. \n"
                    << "Enter 'sell' to sell the current customer a medicine available in storage. \n"
                    << "Enter 'deny' to refuse service to the current customer and make them leave the pharmacy. \n"
                    << "Enter 'menu' to return to the menu. \n"
                    << "Good luck! \n";

                    cout << "Enter '3' to return to the game. \n";
                    cin >> menu;

                    while (!(cin >> menu)) {
                        cout << "There's literally one option you can choose from here. \n";
                        cin.clear();
                        cin.ignore(365, '\n');
                    }
                }

                cout << "Smoke break over, you're back in the pharmacy." << endl;
            } 
            
            else {
                cout << "Invalid input. Check your spelling, or enter \"menu\" to see how to play again." << endl;
            }
        }
    }

    cout << "It's now the end of your busy working day." << endl;

    EndScene endscene;

    if (user.getScore() >= 40){
        endscene.goodEnding();
    } 
    
    else {
        endscene.badEnding();
    }

    return 0;
}
