#include "Player.h"
#include "PlayerTest.h"
#include "Person.h"

int main() {
    PlayerTest beta; // create test user
    beta.ageTest();
    beta.nameTest();
    beta.takeMedicineTest();

    Player user; // create user

    user.setName("abdefghijklmnopqrst");
    cout << user.getName();

    return 0;
}