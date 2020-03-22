#include<iostream>
#include<string>

#ifndef READ_H
#define READ_H

using namespace std;

class Read{
public:
    Read() = default;
    istream &readIn(istream &, string &);
    istream &readIn(istream &, int &);
    istream &readIn(istream &, double &);
};

#endif
