#include <iostream>
#include <string>
#include "Player.h"
#include "EndScene.h"

using namespace std;

void EndScene::goodEnding(){
    cout << "After a long day of distributing medicine to the people... you go home!" << "Congratulations, you made it." << endl;
    cout << "You're a real pharmacist!" << endl;
}

void EndScene::badEnding(){
    cout << "The night is impossibly dark. You wander from alleyway to alleyway, searching for your car." << endl;
    cout << "Where is it? You wonder." << endl;
    cout << "Your stomach hurts from the copious amounts of Panadol™ you've been taking all day... for you have ceaseless headaches that never go away." << endl;
    
    // png jumpscare of a police guy

    cout << "'Hey, freeze! It's the police!'" << endl;
    cout << "Wait, what?" << endl;
    cout << "'We received a tip... but that'll just be the tip of the ice-berg when you're in court!'" << endl;
}