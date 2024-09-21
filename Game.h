#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

class Game {
    private:

    std::string name;
    std::string developers;
    std::string publisher;
    std::string releaseDate;
    std::string genre;

    public:

    std::string getName();
    std::string getDevelopers();
    std::string getPublisher();
    std::string getReleaseDate();
    std::string getGenre();

    void setName(std::string name);
    void setDevelopers(std::string developers);
    void setPublisher(std::string publisher);
    void setReleaseDate(std::string releaseDate);
    void setGenre(std::string genre);

};

#endif 