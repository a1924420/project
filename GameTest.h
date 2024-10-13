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

        // Sets game as default
        Game game;

        // Sets passed as initially true so it only changes if a test is failed
        bool passed = true;

        // Prints default parameters
        std::cout << "Name: " << game.getName() << std::endl;
        std::cout << "Developers: " << game.getDevelopers() << std::endl;
        std::cout << "Publisher: " << game.getPublisher() << std::endl;
        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
        std::cout << "Genre: " << game.getGenre() << std::endl;

        // Checks default parameters print as expected
        passed &= equalOrNot(game.getName(), " ");
        passed &= equalOrNot(game.getDevelopers(), " ");
        passed &= equalOrNot(game.getPublisher(), " ");
        passed &= equalOrNot(game.getReleaseDate(), " ");
        passed &= equalOrNot(game.getGenre(), " ");

        // States if test has been passed or failed
        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    // Tests the parameterised constructor
    void testConstructor(){

        // Setting constructor with assgined variables
        Game game("Backyard Pharmacy", "38 SnifferDogg Studios", "420° Entertainment", "22/09/2024", "Dark Comedy");

        bool passed = true;

        // Prints parameters associated to each variable
        std::cout << "Name: " << game.getName() << std::endl;
        std::cout << "Developers: " << game.getDevelopers() << std::endl;
        std::cout << "Publisher: " << game.getPublisher() << std::endl;
        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
        std::cout << "Genre: " << game.getGenre() << std::endl;

        // Tests parameters have been assigned correctly
        passed &= equalOrNot(game.getName(), "Backyard Pharmacy");
        passed &= equalOrNot(game.getDevelopers(), "38 SnifferDogg Studios");
        passed &= equalOrNot(game.getPublisher(), "420° Entertainment");
        passed &= equalOrNot(game.getReleaseDate(), "22/09/2024");
        passed &= equalOrNot(game.getGenre(), "Dark Comedy");

        // States if test has been passed or failed
        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    // Tests the getter and setter functions
    void testGettersAndSetters(){
        Game game;

        bool passed = true;

        // Setting all variables with setter functions and printing result
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

        // Checking the expected output is the actual output
        passed &= equalOrNot(game.getName(), "Unlicensed to Kill");
        passed &= equalOrNot(game.getDevelopers(), "PixelDose Studios");
        passed &= equalOrNot(game.getPublisher(), "VitalPlay Entertainment");
        passed &= equalOrNot(game.getReleaseDate(), "14/04/1994");
        passed &= equalOrNot(game.getGenre(), "Crime Thriller");

        // States if test has been passed or failed
        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;
    }

    // Tests that the game can be modified from the default constructor
    void testModifyGame(){
        Game game;

        bool passed = true;

        // Gets variables from user input
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

        // Printing all variables set by user input
        std::cout << "Name: " << game.getName() << std::endl;
        std::cout << "Developers: " << game.getDevelopers() << std::endl;
        std::cout << "Publisher: " << game.getPublisher() << std::endl;
        std::cout << "Release Date: " << game.getReleaseDate() << std::endl;
        std::cout << "Genre: " << game.getGenre() << std::endl;

        // Tests that expected output equals real output
        passed &= equalOrNot(game.getName(), name);
        passed &= equalOrNot(game.getDevelopers(), developers);
        passed &= equalOrNot(game.getPublisher(), publisher);
        passed &= equalOrNot(game.getReleaseDate(), releaseDate);
        passed &= equalOrNot(game.getGenre(), genre);

        // States if test has been passed or failed
        std::cout << (passed ? "Test passed." : "Test failed.") << std::endl;

    }

    // Takes in parameter returned from getter function and expected output to check if they are equal
    bool equalOrNot(std::string actual, std::string expected){
        if (actual != expected){
            return false;
        }
        return true;
    }

};

#endif