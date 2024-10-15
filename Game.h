#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

/* Game class represents the video game, storing its details
including its name, developers, publisher, release date and genre. */
class Game {
    private:

    // Private variables used to store the game's details
    std::string name; 
    std::string developers; 
    std::string publisher; 
    std::string releaseDate; 
    std::string genre; 

    public:

    // Default constructor
    Game();

    // Parameterised constructor
    Game(std::string name, std::string developers, std::string publisher, std::string releaseDate, std::string genre);

    // Getter functions to access and return private variables

    std::string getName();

    std::string getDevelopers();

    std::string getPublisher();

    std::string getReleaseDate();

    std::string getGenre();

    // Setter functions to modify private variables

    void setName(std::string name);

    void setDevelopers(std::string developers);

    void setPublisher(std::string publisher);

    void setReleaseDate(std::string releaseDate);

    void setGenre(std::string genre);

};

#endif 