#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

// abstract class that all the entities will inherit from

class Person
{
private:
    std::string name;
    int age;

public:
    virtual std::string getName() = 0;
    virtual int getAge() = 0;

    virtual void setName(std::string name) = 0;
    virtual void setAge(int age) = 0;
};

#endif