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

int main(){

    Game game("Backyard Pharmacy", "SnifferDogg38 Studios", "420° Entertainment", "22/09/2024", "Dark Comedy");

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
            std::cout << "Developers:   " << game.getDevelopers() << std::endl;
            std::cout << "Publisher:    " << game.getPublisher() << std::endl;
            std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
            std::cout << "Genre:        " << game.getGenre() << std::endl;
            std::cout << std::endl;
        } else if (menu == 3){
            break;
        } else {
            std::cout << "Invalid input, please enter 1, 2 or 3: " << std::endl;
        }
    }

    std::cout << "The game has begun." << std::endl;

}
