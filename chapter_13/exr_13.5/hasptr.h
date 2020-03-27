#ifndef HASPTR_H
#define HASPTR_H

#include<iostream>
#include<string>

using namespace std;

class Hasptr{
public:
    Hasptr(int, const string&);//Initialization constructor.
    Hasptr(const Hasptr&);//Copy constructor.
    int val1;
    string *val2;
    void print();//To output values to console.
};

#endif
