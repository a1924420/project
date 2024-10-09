#include "Visitor.cpp"
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

    // open up menu at the beginning of the game

    int menu = 4;

    while (menu != 3){
        cout << "For 'How to Play': Enter 1" << endl; 
        cout << "For 'About Game': Enter 2" << endl;
        cout << "For 'Start Game': Enter 3" << endl;

        cin >> menu;

        if (menu == 1){ // instructions on how to play the game
            cout << "Here be instructions: \n" 
            << "You're playing as a pharmacist and your job is to deliver medicine to patients. \n"
            << "To do so, heed your patients' description of their ailments and match them up with the right meds. \n"
            << "Be warned though! Some patients are not what they seem... \n"
            << "If you feel something is off, deny them! Undercover cops are around every corner. \n"
            << "Be sure to get medicine to as many patients as possible without giving one to a cop. \n"
            << "Otherwise you may find that something unpleasant will happen... \n"
            << "Good luck! \n";

            cin >> menu;
        } 
        
        else if (menu == 2){ // information about the game devs
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

            cin >> menu;
        } 
        
        else if (menu == 3){ // start game
            break;
        } 
        
        else {
            cout << "Invalid input, please enter 1, 2, or 3: " << endl;
            cin >> menu;
        }

    }

    return 0;
}