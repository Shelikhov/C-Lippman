#pragma once

#include<string>
#include<iostream>

using namespace std;

class Person{
public:
    Person();
    string name;
    string address;
};

istream &read(istream &, string &);
ostream &print(ostream &, Person &);
