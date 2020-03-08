#pragma once

#include<string>
#include<iostream>
#include"Print.h"

using namespace std;

class Person{
    friend istream &read(istream &, Person &);//Using (friend) for access to private parameters (name. address).
public:
    Person() = default;
    Person(istream &);
    Person(string);
    Person(string, string);
    string retName();
    string retAddr();
private:
    string name;
    string address;
};

istream &read(istream &, Person&);
