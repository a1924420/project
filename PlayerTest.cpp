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
            cout << "Error 1: medicineID is out of bounds.";
        }

        user.takeMedicine(9);

        if (user.getInventory() == 9) {
            cout << "Error 2: medicineID is out of bounds.";
        }

        user.takeMedicine(8);

        if (user.getInventory() != 8) {
            cout << "Error 3: inventory has not taken ID within bounds.";
        }
    };

    void nameTest() {
        user.setName("Greg");

        if (user.getName() != "Greg") {
            cout << "Error 1: name did not set correctly.";
        }

        user.setName("123456789010111213");

        if (user.getName() == "123456789010111213") {
            cout << "Error 2: name exceeds maximum length (12).";
        }

        user.setName(" ");

        if (user.getName() == " ") {
            cout << "Error 3: name must contain characters.";
        }
    };

};

#endif