#include "Player.h"
#include "EndScene.h"
#include "Patient.h"

#include <iostream>

using namespace std;

int main() {
    Player user("eliza", 18, 0, 0);
    cout << user.getScore() << endl;

    

    user.setScore(user.getScore() + 10);
    cout << user.getScore();

    return 0;
}