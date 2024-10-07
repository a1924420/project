#ifndef PLAYERTEST_H
#define PLAYERTEST_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Player.h"

using namespace std;

class PlayerTest {
private:
    Player user;

public:
    void inventoryTest() {
        // testing inventory and medicine

        user.takeMedicine(-1);

        if (user.getInventory() == -1) {
            cout << "Error 1: medicineID out of bounds.";
        }

        user.takeMedicine(9);

        if (user.getInventory() == 9) {
            cout << "Error 2: medicineID out of bounds.";
        }

        user.takeMedicine('1');

        if (user.getInventory() == '1') {
            cout << "Error 3: medicineID not of 'integer' type.";
        }
    };

    void test() {
        //
    };

};

#endif