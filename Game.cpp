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
std::string Game::getName(){
    return name;
}

// Getter for the developers
std::string Game::getDevelopers(){
    return developers;
}

// Getter for the publisher
std::string Game::getPublisher(){
    return publisher;
}

// Getter for the release date
std::string Game::getReleaseDate(){
    return releaseDate;
}

// Getter for the genre
std::string Game::getGenre(){
    return genre;
}

// Setter for the game name
void Game::setName(std::string name){
    this->name = name;
}

// Setter for the game developers
void Game::setDevelopers(std::string developers){
    this->developers = developers;
}

// Setter for the game publisher
void Game::setPublisher(std::string publisher){
    this->publisher = publisher;
}

// Setter for the game release date
void Game::setReleaseDate(std::string releaseDate){
    this->releaseDate = releaseDate;
}

// Setter for the game genre
void Game::setGenre(std::string genre){
    this->genre = genre;
}