#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

/* Game class represents the video game, storing its details
including its name, developers, publisher, release date and genre. */
class Game {
    private:

    // Private variables used to store the game's details
    std::string name; // name of the game
    std::string developers; // developers of the game
    std::string publisher; // publisher of the game
    std::string releaseDate; // release date of the game
    std::string genre; // genre of the game

    public:

    // Default constructor
    // Initialises game with empty strings for all variables
    Game();

    // Parameterised constructor
    // Initialises game's details with specific strings for all variables
    Game(std::string name, std::string developers, std::string publisher, std::string releaseDate, std::string genre);

    // Getter functions to access and return private variables

    // Returns the name of the game
    std::string getName();

    // Returns the developers of the game
    std::string getDevelopers();

    // Returns the publisher of the game
    std::string getPublisher();

    // Returns the release date of the game
    std::string getReleaseDate();

    // Returns the genre of the game
    std::string getGenre();

    // Setter functions to modify private variables

    // Sets the name of the game
    void setName(std::string name);

    // Sets the developers of the game
    void setDevelopers(std::string developers);

    // Sets the publisher of the game
    void setPublisher(std::string publisher);

    // Sets the release date of the game
    void setReleaseDate(std::string releaseDate);

    // Sets the genre of the game
    void setGenre(std::string genre);

};

#endif 