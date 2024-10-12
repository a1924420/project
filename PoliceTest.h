#ifndef POLICETEST_H
#define POLICETEST_H

#include "Police.h"
#include <iostream>

class PoliceTest {
public:
   
    void runTests();

private:
   
    void testConstructor();
    void testDialogue();
    void testArrest();
};

#endif
