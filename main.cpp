#include "Visitor.h"
#include "Person.h"
#include "Player.h"
#include "Customer.h"
#include "Patient.h"
#include "Police.h"
#include "Game.h"
#include "Medicine.h"
#include "Storage.h"
#include "EndScene.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    Game game("Backyard Pharmacy", "38 SnifferDogg Studios", "Skaghog House", "22/09/2024", "Dark Comedy");
    int menu = 4; // default value is 4
    bool gameState = false; // whether the player is currently in a game

    // open up menu at the beginning of the game

    while ((menu != 3) || (gameState == false)) { // menu opened up 
        cout << endl << "For 'How to Play': Enter 1" << endl; 
        cout << "For 'About Game': Enter 2" << endl;
        cout << "For 'Start Game': Enter 3" << endl;

        cin >> menu;

        while (!(cin >> menu)) { // if input is not numerical
            cout << "I said 1, 2, or 3. \n";
            cin.clear();
            cin.ignore(365, '\n');
        }

        if (menu == 1) { // instructions on how to play the game
            cout << "Here be instructions: \n" 
            << "You're playing as a pharmacist and your job is to deliver medicine to patients. \n"
            << "To do so, heed your patients' description of their ailments and match them up with the right meds. \n"
            << "Be warned though! Some patients are not what they seem... \n"
            << "If you feel something is off, deny them! Undercover cops are around every corner. \n"
            << "Be sure to get medicine to as many patients as possible without giving one to a cop. \n"
            << "Otherwise you may find that something unpleasant will happen... \n"
            << "Good luck! \n";
        } 
        
        else if (menu == 2) { // information about the game devs
            cout << "Name:         " << game.getName() << endl;
            cout << "Developers:   " << game.getDevelopers() << endl;
            cout << "Publisher:    " << game.getPublisher() << endl;
            cout << "Release Date: " << game.getReleaseDate() << endl;
            cout << "Genre:        " << game.getGenre() << endl;
            cout << endl;
        } 
        
        else if (menu == 3) { // start game
            gameState = true;
            break;
        } 
        
        else {
            cout << "Error occurred in menu." << endl;
        }
    }

    while (gameState == true) {
        // game begins here

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

        int answer = 2; // initialised with default value 

        // prologue intro plays 
        cout << "It's a beautiful day outside and you're a terrible student. \n"
        << "Your name is " << user.getName() << " and you're " << user.getAge() << " years young. \n"
        << "Today, you're starting your new job as a real pharmacist. \n"
        << "What wonders will await you on your first shift? \n" 
        << "You ponder that as you open your backdoor and enter your backyard. \n"
        << "Which also happens to be your new workspace. \n"
        << "That's right... you're a backyard pharmacist! \n";

        cout << "Now, are you ready to start? \n"
        << "Type 0 for yes and 1 for no.";

        cin >> answer;

        while (!(cin >> answer) || (answer != 0 && answer != 1)) { // if input is invalid
            cout << "I don't remember that being an option. \n";
            cin.clear();
            cin.ignore(365, '\n');
        }

        if (answer == 0) {
            cout << "Great job! \n" 
            << "Let's get you to your first customer, who's coming through the unlocked side entrance that leads directly to your kitchen now.";
        }

        else if (answer == 1) {
            cout << "Why did you open this game then?";
            return 0;
        }

        else {
            cout << "Unknown error occurred.";
            return 0;
        }

        gameState = false; // implement play again functionality?
    }

    return 0;
}