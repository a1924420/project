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

int main(){

    Game game("Backyard Pharmacy", "38 SnifferDogg Studios", "Skag Horse Entertainment", "22/09/2024", "Dark Comedy");

    int menu = 4;

    while (menu != 3){
        std::cout << "For 'How to Play': Enter 1" << std::endl;
        std::cout << "For 'About Game': Enter 2" << std::endl;
        std::cout << "For 'Start Game': Enter 3" << std::endl;

        std::cin >> menu;
        std::cin.ignore();

        if (menu == 1){
            std::cout << "Here are the instructions: " << std::endl;
        } else if (menu == 2){
            std::cout << "Name:         " << game.getName() << std::endl;
            std::cin.get();
            std::cout << "Developers:   " << game.getDevelopers() << std::endl;
            std::cin.get();
            std::cout << "Publisher:    " << game.getPublisher() << std::endl;
            std::cin.get();
            std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
            std::cin.get();
            std::cout << "Genre:        " << game.getGenre() << std::endl;
            std::cin.get();
            std::cout << std::endl;
        } else if (menu == 3){
            break;
        } else {
            std::cout << "Invalid input, please enter 1, 2 or 3: " << std::endl;
        }
    }

    std::cout << "The game has begun." << std::endl;

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

    std::cout << "Customer 1 enters." << std::endl;

    // Customer 1 introduction

    Patient p1("Piper", 15, 1, "My head feels like it’s going to explode! I’m in so much pain! HELP ME!!!", "Mild headaches and hypochondria.", 0);

    Patient p2("Tai", 0, 2, "I swear I’m always panicking, please get me something that’ll calm me down, quick!", "Self-diagnosed severe anxiety disorder, and self-diagnosed everything really.", 0);

    Patient p3("Doop-Snogg", 52, 3, "You got that good stuff to chill, fam?", "Mild cough, but it ain’t miss Mary Jane’s fault ya feel me dawg", 0);

    Police officer1("Snow", 30, 0, "I’m just really sad all the time, I might be depressed.", "Previously broke right arm due to accident.");

    Police officer2("Herb", 78, 0, "I feel really dizzy when I stand and I’m cold all the time." , "None.");

    Police officer3("Spice", 17, 0, "High cholesterol levels.", "Has family history of high cholesterol and heart attacks.");

    Visitor visitors(0, 8);

    visitors.addCustomer(p1);

    visitors.addCustomer(p2);

    visitors.addCustomer(p3);

    visitors.addCustomer(officer1);

    visitors.addCustomer(officer2);

    visitors.addCustomer(officer3);

    Medicine med1("Panadol", 1, "Treats pain and reduces fever");

    Medicine med2("Xanax", 2, "Treats anxiety");

    Medicine med3("Fluoxetine",3, "Antidepressesant");

    Storage storage(5);
    
    storage.addMedicine(med1);

    storage.addMedicine(med2);

    storage.addMedicine(med3);

    for (int i = 0; i < visitors.getCurrentCapacity(); i++){
        Customer customer = visitors.getVisitors()->at(i);
        
        customer.greetingDialogue(customer);

        std::cout << customer.getIllness() << std::endl;

        // Tell user how to play here

        while (true){

            std::string action;

            std::cout << "Enter what action you would like to execute." << std::endl;

            std::getline(std::cin, action);

            if (action == "age"){
                if (customer.getAge() == 0){
                    std::cout << "That's not a nice question to ask! Do you think I look old!" << std::endl;
                } else {
                    std::cout << "My age is " << customer.getAge() << std::endl;
                }
            } else if (action == "medical history"){
                std::cout << customer.getMedicalHistory() << std::endl;
            } else if (action == "storage"){
                for (int i = 0; i < storage.getNumOfMedicines(); i++){
                    Medicine med = storage.getMedicines()[i];
                    std::cout << "Medicine " << i+1 << ":" << std::endl;
                    std::cout << "Name: " << med.getMedName() << std::endl;
                    std::cout << "Description: " << med.getDescription() << "\n" << std::endl;
                }
            } else if (action == "sell"){
                if (customer.getID() == 0){
                    Police police;
                    customer = police;
                    police.wrongDialogue();
                } else {
                    std::string med;
                    std::cout << "Which medicine are you selling to this patient?" << std::endl;
                    std::getline(std::cin, med);

                    Patient patient;

                    customer = patient;

                    patient.setPrescriptionID(i+1);
                    
                    if (med == "medicine 1"){
                        customer.checker(med1, patient, user);
                    } else if (med == "medicine 2"){
                        customer.checker(med2, patient, user);
                    } else if (med == "medicine 3"){
                        customer.checker(med3, patient, user);
                   /* } else if (med == "medicine 4"){
                        customer.checker(med1, patient, user);
                    } else if (med == "medicine 5"){
                        customer.checker(med1, patient, user);
                    }*/
                    } else {
                        std::cout << "Invalid input. Check your spelling, or enter \"menu\" to see how to play again." << std::endl;
                    }
                }
                break;
            } else if (action == "deny"){
                std::cout << "'No prescription medicines are sold in this establishment' you say." << std::endl;
                if (customer.getID() == 0){
                    Police police;
                    customer = police;
                    police.rightDialogue();
                } else {
                    Patient patient;
                    customer = patient;
                    patient.wrongDialogue();
                }
                break;
            } else if (action == "menu"){
                int menu;

                while (menu != 3){
                std::cout << "For 'How to Play': Enter 1" << std::endl;
                std::cout << "For 'About Game': Enter 2" << std::endl;
                std::cout << "To return to game: Enter 3" << std::endl;

                std::cin >> menu;
                std::cin.ignore();

                if (menu == 1){
                    std::cout << "Here are the instructions: " << std::endl;
                } else if (menu == 2){
                    std::cout << "Name:         " << game.getName() << std::endl;
                    std::cout << "Developers:   " << game.getDevelopers() << std::endl;
                    std::cout << "Publisher:    " << game.getPublisher() << std::endl;
                    std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
                    std::cout << "Genre:        " << game.getGenre() << std::endl;
                    std::cout << std::endl;
                } else if (menu == 3){
                } else {
                    std::cout << "Invalid input, please enter 1, 2 or 3: " << std::endl;
                }
                }

                std::cout << "Smoke break over, you're back in the pharmacy." << std::endl;

            } else {
                std::cout << "Invalid input. Check your spelling, or enter \"menu\" to see how to play again." << std::endl;
            }
        }
    }
}
