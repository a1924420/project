#ifndef GAMETEST_H
#define GAMETEST_H

#include <iostream>
#include <string>
#include "Game.h"

class GameTest{

    public:

    void runTests(){
        testDefault();
        testConstructor();
        testGettersAndSetters();
        testModifyGame();
    }

    private:

    void testDefault(){
        Game game;

        std::cout << "Name: " << game.getName() << std::endl;
        std::cout << "Developers: " << game.getDevelopers() << std::endl;
        std::cout << "Publisher: " << game.getPublisher() << std::endl;
        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
        std::cout << "Genre: " << game.getGenre() << std::endl;
    }

    void testConstructor(){
        Game game("Backyard Pharmacy", "38 SnifferDogg Studios", "420° Entertainment", "22/09/2024", "Dark Comedy");

        std::cout << "Name: " << game.getName() << std::endl;
        std::cout << "Developers: " << game.getDevelopers() << std::endl;
        std::cout << "Publisher: " << game.getPublisher() << std::endl;
        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
        std::cout << "Genre: " << game.getGenre() << std::endl;
    }

    void testGettersAndSetters(){
        Game game;

        game.setName("Unlicensed to Kill");

        std::cout << "Name: " << game.getName() << std::endl;    

        game.setDevelopers("PixelDose Studios");

        std::cout << "Developers: " << game.getDevelopers() << std::endl;

        game.setPublisher("VitalPlay Entertainment");

        std::cout << "Publisher: " << game.getPublisher() << std::endl;

        game.setReleaseDate("14/04/1994");

        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;

        game.setGenre("Crime Thriller");

        std::cout << "Genre: " << game.getGenre() << std::endl;
    }

    void testModifyGame(){
        Game game;

    std::string name;
    std::cout << "Enter new game name: " << std::endl;
    std::getline(std::cin, name);
    game.setName(name);

    std::string developers;
    std::cout << "Enter new game developers: " << std::endl;
    std::getline(std::cin, developers);
    game.setDevelopers(developers);

    std::string publisher;
    std::cout << "Enter new game publisher: " << std::endl;
    std::getline(std::cin, publisher);
    game.setPublisher(publisher);

    std::string releaseDate;
    std::cout << "Enter new game release date: " << std::endl;
    std::getline(std::cin, releaseDate);
    game.setReleaseDate(releaseDate);

    std::string genre;
    std::cout << "Enter new game genre: " << std::endl;
    std::getline(std::cin, genre);
    game.setGenre(genre);

    std::cout << "Name: " << game.getName() << std::endl;
    std::cout << "Developers: " << game.getDevelopers() << std::endl;
    std::cout << "Publisher: " << game.getPublisher() << std::endl;
    std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
    std::cout << "Genre: " << game.getGenre() << std::endl;
    }

};

#endif