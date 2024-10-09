#ifndef POLICE_H
#define POLICE_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"


class Police: public Customer{

    private:

    public:



    void rightDialogue();
    void wrongDialogue();
    static void arrest();

};

#endif