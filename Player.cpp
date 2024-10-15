#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

// constructors
Player::Player() {
    name = "Undefined";
    age = 0;
    inventory = 0;
    int score = 0;
};

Player::Player(string name, int age, int inventory, int score) {
    if (name.length() <= 12 && name.length() > 0) {
        this->name = name;
    }

    else {
        this->name = "Undefined";
    }
    
    this->age = age;
    this->inventory = inventory;
    this->score = score;
};

// setters
void Player::setName(string newName) {
    if (newName.length() <= 12 && newName.length() > 0) {
        this->name = newName;
    }

    else {
        cout << "Your name must be less than 12 characters. \n";
    }
};

void Player::setAge(int age) {
    this->age = age;
};

void Player::setScore(int score) {
    this->score = score;
};

void Player::setInventory(int medicine){
    // takes an id, does not need to be within bounds
    this->inventory = medicine; 
}

// getters
string Player::getName() {
    return name;
};

int Player::getAge() {
    return age;
};

int Player::getScore(){
    return score;
}

int Player::getInventory(){
    return inventory;
}

// player behaviours
void Player::takeMedicine(int medicineID){
    // takes the id of a medicine held in storage 

    if (medicineID <= 8 && medicineID >= 0) {
        // if medicine between 0 and 8, inclusive
        this->inventory = medicineID;
    }

    else {
        cout << "Invalid medicine. \n";
    }
}

void Player::giveMedicine(){
    // may be redundant
    // replace with the checker function from customer
}

void Player::deny(){
    // gives unique dialogue
    // skipping to next customer is done in main()

    cout << "Nuh-uh... that's a cop! A pig! An authority figure! \n"
    << "'No, officer,' you say. 'We don't sell any medicines around here. Only vapes!' \n"
    << "Your customer looks disgruntled. \n";
}