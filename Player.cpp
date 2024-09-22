#include <iostream>
#include <string>
#include "Player.h"

std::string Player::getInventory(){
    return inventory;
}

void Player::setScore(int score){
    this->score = score;
}

void Player::setInventory(std::string inventory){
    this->inventory = inventory;
}

void Player::takeMedicine(){}

void Player::giveMedicine(){}