#include <iostream>
#include <string>
#include "Player.h"

Player::Player(): score(0), inventory(" "){}

int Player::getScore(){
    return score;
}

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

void Player::deny(){}