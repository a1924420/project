#include "Player.h"
#include "PlayerTest.h"
#include "Person.h"

int main() {
    PlayerTest beta;

    /* beta.takeMedicineTest();
    beta.ageTest();
    beta.nameTest();
    beta.constructor(); */

    Player user;

    user.setName("abdefghijklmnopqrst");
    cout << user.getName();

    return 0;
}