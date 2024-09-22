#include <iostream>
#include <string>
#include "Game.h"

std::string Game::getName(){
    return name;
}

std::string Game::getDevelopers(){
    return developers;
}

std::string Game::getPublisher(){
    return publisher;
}

std::string Game::getReleaseDate(){
    return releaseDate;
}

std::string Game::getGenre(){
    return genre;
}

void Game::setName(std::string name){
    this->name = name;
}

void Game::setDevelopers(std::string developers){
    this->developers = developers;
}

void Game::setPublisher(std::string publisher){
    this->publisher = publisher;
}

void Game::setReleaseDate(std::string releaseDate){
    this->releaseDate = releaseDate;
}

void Game::setGenre(std::string genre){
    this->genre = genre;
}