#include <iostream>
#include <string>
#include "Game.h"

// Default constructor
// Initialises game with empty strings for all variables
Game::Game(): name(" "), developers(" "), publisher(" "), releaseDate(" "), genre(" "){}

// Parameterised constructor
// Initialises game's details with specific strings for all variables
Game::Game(std::string name, std::string developers, std::string publisher, std::string releaseDate, std::string genre): 
    name(name), developers(developers), publisher(publisher), releaseDate(releaseDate), genre(genre){}

// Getter for the game name
// @return: returns the name of the game
std::string Game::getName(){
    return name;
}

// Getter for the developers
// @return: returns the developers of the game
std::string Game::getDevelopers(){
    return developers;
}

// Getter for the publisher
// @return: returns the publisher of the game
std::string Game::getPublisher(){
    return publisher;
}

// Getter for the release date
// @return: returns the release date of the game
std::string Game::getReleaseDate(){
    return releaseDate;
}

// Getter for the genre
// @return: returns the genre of the game
std::string Game::getGenre(){
    return genre;
}

// Setter for the game name
// @param name: new name of the game
void Game::setName(std::string name){
    this->name = name;
}

// Setter for the game developers
// @param developers: new developers of the game
void Game::setDevelopers(std::string developers){
    this->developers = developers;
}

// Setter for the game publisher
// @param publisher: new publisher of the game
void Game::setPublisher(std::string publisher){
    this->publisher = publisher;
}

// Setter for the game release date
// @param release date: new release date of the game
void Game::setReleaseDate(std::string releaseDate){
    this->releaseDate = releaseDate;
}

// Setter for the game genre
// @param genre: new genre of the game
void Game::setGenre(std::string genre){
    this->genre = genre;
}