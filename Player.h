#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player{

    private:

    int score;
    std::string inventory;

    public:

    virtual int getScore();

    std::string getInventory();
    void setScore(int score);
    void setInventory(std::string inventory);

    void takeMedicine();
    void giveMedicine();

};

#endif