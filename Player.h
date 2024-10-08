#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Player: public Person {

private:
    int inventory;
    int score;

public:
    // constructors
    Player();
    Player(string name, int age, int inventory, int score);
    
    // setters
    void setName(string name);
    void setAge(int age);
    void setScore(int score);
    void setInventory(int medicine);

    // getters
    string getName();
    int getAge();
    int getScore();
    int getInventory();

    // player behaviours
    void takeMedicine(int medicineID);
    void giveMedicine();
    void deny();
};

#endif