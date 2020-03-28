#ifndef HASPTR_H
#define HASPTR_H

#include<iostream>
#include<string>
#include<new>

using namespace std;

class Hasptr{
public:
    Hasptr(int, const string&);
    Hasptr(const Hasptr&);
    Hasptr &operator=(const Hasptr &);
    ~Hasptr();
    int val1;
    string *val2;
    void print();
    size_t *cnt;
};

#endif
