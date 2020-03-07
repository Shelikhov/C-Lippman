#pragma once

#include<string>
#include<iostream>

using namespace std;

class Person{
public:
    Person() = default;
    Person(istream &);
    Person(string);
    Person(string, string);
    string name;
    string address;
};

istream &read(istream &, string &);
