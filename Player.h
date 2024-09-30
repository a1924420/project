#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Person.h"

class Player: public Person{

    private:

    std::string inventory;

    int score;

    public:

    std::string getName();
    
    int getAge();

    void setName();

    void setAge();

    int getScore();
    std::string getInventory();
    void setScore(int score);
    void setInventory(std::string inventory);

    void takeMedicine();
    void giveMedicine();
    void deny();

};

#endif