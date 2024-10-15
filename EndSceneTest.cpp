// testing for Endscene

#include "EndScene.h"
#include "EndSceneTest.h"
#include <iostream>

using namespace std;

int main() {
    int score = 0;

    cout << "Enter score" << endl;
    cin >> score;

    EndSceneTest alpha(score);
    alpha.test(); // run tests on score
    
    return 0;
}