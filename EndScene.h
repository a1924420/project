#ifndef ENDSCENE_H
#define ENDSCENE_H

#include <iostream>
#include <string>
#include "Player.h"

class EndScene: public Player{

    private:

    public:

    int getScore();

    void goodEnding();
    void badEnding();

};

#endif