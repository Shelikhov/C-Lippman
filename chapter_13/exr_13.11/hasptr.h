#ifndef HASPTR_H
#define HASPTR_H

#include<iostream>
#include<string>

using namespace std;

class Hasptr{
public:
    Hasptr(int, const string&);//Initialization constructor.
    Hasptr(const Hasptr&);//Copy constructor.
    Hasptr &operator=(const Hasptr &);//Asiggnment operator. 
    ~Hasptr();//Destructor.
    int val1;
    string *val2;
    void print();
};

#endif
