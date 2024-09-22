#include <iostream>
#include <string>
#include "Game.h"

int main(){

    Game game("Unlicensed Pharmacy", "PharmaForge Studios", "Rx Interactive", "22/09/2024", "Dark Comedy");

    int num;

    std::cout << "Enter 1 to see about game or 2 for different about game: ";
    std::cin >> num;

    if(num == 1){

        std::cout << "Name: " << game.getName() << std::endl;
        std::cout << "Developers: " << game.getDevelopers() << std::endl;
        std::cout << "Publisher: " << game.getPublisher() << std::endl;
        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
        std::cout << "Genre: " << game.getGenre() << std::endl;

    } else if(num == 2){

        game.setName("Unlicensed to Kill");

        std::cout << "New Name: " << game.getName() << std::endl;    

        game.setDevelopers("PixelDose Studios");

        std::cout << "New Developers: " << game.getDevelopers() << std::endl;

        game.setPublisher("VitalPlay Entertainment");

        std::cout << "New Publisher: " << game.getPublisher() << std::endl;

        game.setReleaseDate("14/04/1994");

        std::cout << "New Release Date: " << game.getReleaseDate() << std::endl;

        game.setGenre("Crime Thriller");

        std::cout << "New Genre: " << game.getGenre() << std::endl;

    } else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;

}