#include <iostream>
#include <string>
#include "Game.h"

int main(){

    Game game("Unlicensed Pharmacy", "PharmaForge Studios", "Rx Interactive", "22/09/2024", "Dark Comedy");

    int num;

    std::cout << "Enter 1 to see about game or 2 for different about game: ";
    std::cin >> num;
    std::cin.ignore();

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

    Game newGame;

    std::string name;
    std::cout << "Enter new game name: " << std::endl;
    std::getline(std::cin, name);
    newGame.setName(name);

    std::string developers;
    std::cout << "Enter new game developers: " << std::endl;
    std::getline(std::cin, developers);
    newGame.setDevelopers(developers);

    std::string publisher;
    std::cout << "Enter new game publisher: " << std::endl;
    std::getline(std::cin, publisher);
    newGame.setPublisher(publisher);

    std::string releaseDate;
    std::cout << "Enter new game release date: " << std::endl;
    std::getline(std::cin, releaseDate);
    newGame.setReleaseDate(releaseDate);

    std::string genre;
    std::cout << "Enter new game genre: " << std::endl;
    std::getline(std::cin, genre);
    newGame.setGenre(genre);

    std::cout << "Name: " << newGame.getName() << std::endl;
    std::cout << "Developers: " << newGame.getDevelopers() << std::endl;
    std::cout << "Publisher: " << newGame.getPublisher() << std::endl;
    std::cout << "Release Date: " << newGame.getReleaseDate() << std::endl;
    std::cout << "Genre: " << newGame.getGenre() << std::endl;    

    return 0;

}