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
    void takeMedicineTest() {
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
            cout << "Error 1: name did not set correctly. Current value is " << user.getName();
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

    void ageTest() {
        // testing setters and getters

        user.setAge(0);

        if (user.getAge() != 0) {
            cout << "Error 1: age did not take.";
        }

        user.setAge(1000);

        if (user.getAge() != 1000) {
            cout << "Error 2: age did not take.";
        }

        user.setAge('abc');

        if (user.getAge() == 'abc') {
            cout << "Error 3: age has taken a non-integer value.";
        }
    }

    void constructor() {
        Player Marge("Marge", 28, 1, 0);

        if (Marge.getName() != "Marge") {
            cout << "Error 1: Name did not set correctly. Current value is: " << Marge.getName();
        }

        if (Marge.getAge() != 28) {
            cout << "Error 2: Age did not set correctly. Current value is: " << Marge.getAge();
        }

        if (Marge.getInventory() != 1) {
            cout << "Error 3: Inventory did not set correctly. Current value is: " << Marge.getInventory();
        }

        if (Marge.getScore() != 0) {
            cout << "Error 4: Score did not set correctly. Current value is: " << Marge.getScore();
        }
    }

};

#endif