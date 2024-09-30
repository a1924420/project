#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
private:

    std::string name;
    
    int age;

public:

    virtual std::string getName() = 0;

    virtual int getAge() = 0;

    virtual void setName() = 0;

    virtual void setAge() = 0;
};

#endif