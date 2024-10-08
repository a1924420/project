#ifndef GAMETEST_H
#define GAMETEST_H

#include <iostream>
#include <string>
#include "Game.h"

class GameTest{

    public:

    // Runs all tests for game class
    void runTests(){
        testDefault();
        std::cout << "\nDefault Test Complete.\n" << std::endl;
        testConstructor();
        std::cout << "\nConstructor Test Complete.\n" << std::endl;
        testGettersAndSetters();
        std::cout << "\nGetters and Setters Test Complete.\n" << std::endl;
        testModifyGame();
        std::cout << "\nModify Game Test Complete.\n" << std::endl;
    }

    private:

    // Tests the default constructor
    void testDefault(){
        Game game;

        std::cout << "Name: " << game.getName() << std::endl;
        std::cout << "Developers: " << game.getDevelopers() << std::endl;
        std::cout << "Publisher: " << game.getPublisher() << std::endl;
        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
        std::cout << "Genre: " << game.getGenre() << std::endl;
    }

    // Tests the parameterised constructor
    void testConstructor(){
        Game game("Backyard Pharmacy", "38 SnifferDogg Studios", "420° Entertainment", "22/09/2024", "Dark Comedy");

        std::cout << "Name: " << game.getName() << std::endl;
        std::cout << "Developers: " << game.getDevelopers() << std::endl;
        std::cout << "Publisher: " << game.getPublisher() << std::endl;
        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
        std::cout << "Genre: " << game.getGenre() << std::endl;
    }

    // Tests the getter and setter functions
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

    // Tests that the game can be modified from the default constructor
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