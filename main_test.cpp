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

#include <iostream>
#include <string>
#include <vector>

int main(){

    Game game("Backyard Pharmacy", "38 SnifferDogg Studios", "Skag Horse Entertainment", "22/09/2024", "Dark Comedy");

    int menu;

    while (menu != 3){
        std::cout << "For 'How to Play': Enter 1" << std::endl;
        std::cout << "For 'About Game': Enter 2" << std::endl;
        std::cout << "For 'Start Game': Enter 3" << std::endl;

        std::cin >> menu;

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

    std::cout << "Customer 1 enters." << std::endl;

    // Customer 1 introduction

    Patient p1("Piper", 15, 1, "My head feels like it’s going to explode! I’m in so much pain! HELP ME!!!", "Mild headaches and hypochondria.", 1);

    Patient p2("Tai", 0, 2, "I swear I’m always panicking, please get me something that’ll calm me down, quick!", "Self-diagnosed severe anxiety disorder, and self-diagnosed everything really.", 2);

    Patient p3("Doop-Snogg", 52, 3, "You got that good stuff to chill, fam?", "Mild cough, but it ain’t miss Mary Jane’s fault ya feel me dawg", 3);

    Police officer1("Snow", 30, 0, "I’m just really sad all the time, I might be depressed.", "Previously broke right arm due to accident");

    Police officer2("Herb", 78, 0, "I feel really dizzy when I stand and I’m cold all the time" , "None");

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
        Customer customer = visitors.getVisitors()[i];
        std::cout << customer.getName() << std::endl;
        std::cout << customer.getIllness() << "\n" << std::endl;
    }

    for (int i = 0; i < visitors.getCurrentCapacity(); i++){
        Customer customer = visitors.getVisitors()[i];
        
        customer.greetingDialogue(customer);

        std::cout << customer.getIllness() << std::endl;

        // Tell user how to play here

        for (int i = 0; i < 1; i++){

            std::string action;

            std::cout << "Enter what action you would like to execute." << std::endl;

            std::getline(std::cin, action);

            if (action == "age"){
                if (customer.getAge() == 0){
                    std::cout << "That's not a nice question to ask! Do you think I look old!" << std::endl;
                } else {
                    std::cout << "My age is " << customer.getAge() << std::endl;
                }
                i--;
            } else if (action == "medical history"){
                std::cout << customer.getMedicalHistory() << std::endl;
                i--;
            } else if (action == "storage"){
                for (int i = 0; i < storage.getNumOfMedicines(); i++){
                    Medicine med = storage.getMedicines()[i];
                    std::cout << "Medicine " << i+1 << ":" << std::endl;
                    std::cout << "Name: " << med.getMedName() << std::endl;
                    std::cout << "Description: " << med.getDescription() << "\n" << std::endl;
                }
                i--;
            } else if (action == "sell"){
                if (customer.getID() == 0){
                    Police police;
                    customer = police;
                    police.wrongDialogue();
                } else {
                    Patient patient;
                    customer = patient;

                    std::string med;
                    std::cout << "Which medicine are you selling to this patient?" << std::endl;
                    std::getline(std::cin, med);

                    if (med == "medicine 1"){
                        
                    }

                }
                
            } else if (action == "deny"){
                if (customer.getID() == 0){
                    Police police;
                    customer = police;
                    police.rightDialogue();
                } else {
                    Patient patient;
                    customer = patient;
                    patient.wrongDialogue();
                }
            } else if (action == "menu"){
                int menu;

                while (menu != 3){
                std::cout << "For 'How to Play': Enter 1" << std::endl;
                std::cout << "For 'About Game': Enter 2" << std::endl;
                std::cout << "To return to game: Enter 3" << std::endl;

                std::cin >> menu;

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
                    i--;
                } else {
                    std::cout << "Invalid input, please enter 1, 2 or 3: " << std::endl;
                }
                }

                std::cout << "Smoke break over, you're back in the pharmacy." << std::endl;

            } else {
                std::cout << "Invalid input. Check your spelling, or enter \"menu\" to see how to play again." << std::endl;
                i--;
            }
        }
    }
}
