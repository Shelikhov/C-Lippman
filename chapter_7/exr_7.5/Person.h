#include<string>
#include<iostream>

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person{
public:
    Person();
    void addName(string &);
    void addAddr(string &);
    void showPerson();
private:
    string name;
    string address;
};

#endif
