#include <iostream>
#include <string>
#include "Player.h"
#include "EndScene.h"

using namespace std;

void EndScene::goodEnding(){
    cout << "After a long day of distributing medicine to the people... you go home! \n" 
    << "You're a real pharmacist! \n";
}

void EndScene::badEnding(){
    cout << "The night is impossibly dark. You wander from alleyway to alleyway, searching for your car.\n";
    cin.get();
    cout << "Where is it? You wonder.\n";
    cin.get();
    cout << "Your stomach hurts from the copious amounts of Panadol™ you've been taking all day.\n";
    cin.get();
    cout << "If only your mother-- hey, what was that? Did you see that?\n" << endl;
    
    // insert png jumpscare of a police guy
    // consider png++ to handle this

    cout << "'Hey, freeze! It's the police!' \n";
    cin.get();
    cout << "Wait, what? \n";
    cin.get();
    cout << "'We received a tip... but that'll just be the tip of the ice-berg when you're in court!' \n" << endl;
}
