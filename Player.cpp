#include <iostream>
#include <string>
#include "Player.h"

int Player::getScore(){
    return score;
}

int Player::getInventory(){
    return inventory;
}

void Player::setScore(int score){
    this->score = score;
}

void Player::setInventory(int medicine){
    // takes the id of a medicine held in storage
    this->inventory = medicine; 
}

void Player::takeMedicine(int medicineID){
    // takes the id of a medicine held in storage 
    this->inventory = medicineID;
}

void Player::giveMedicine(){
    //
}

void Player::deny(){
    //
}