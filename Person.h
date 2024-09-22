#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person{

    private:

    std::string name;
    int age;

    public:

    std::string getName();
    int getAge();

    void setName();
    void setAge();

};

#endif