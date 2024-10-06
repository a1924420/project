#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Player: public Person{

private:
    int inventory;
    int score;

public:
    
    void setName(string name);
    void setAge(int age);
    void setScore(int score);
    void setInventory(int medicine);

    string getName();
    int getAge();
    int getScore();
    int getInventory();

    void takeMedicine(int medicineID);
    void giveMedicine();
    void deny();
};

#endif