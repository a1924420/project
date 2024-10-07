#ifndef ENDSCENETEST_H
#define ENDSCENETEST_H

#include <iostream>
#include <string>
#include "Player.h"
#include "EndScene.h"

using namespace std;

class EndSceneTest {
private:
    EndScene ending;
    int score;

public:
    EndSceneTest(int score) {
        this-> score = score;
    };

    void test() {
        if (score < 40 && score >= 0) {
            cout << "Score: " << score << " Bad ending played." << endl;
            ending.badEnding(); // if score between 0 and 40 
        }

        else if (score <= 50 && score >= 40) {
            cout << "Score: " << score << " Good ending played." << endl;
            ending.goodEnding(); // if score between 40 and 50
        }

        else {
            cout << "Score: " << score << "An error has occurred." << endl;
        }
    }
};

#endif