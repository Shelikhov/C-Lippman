#include<iostream>
#include<string>

#ifndef PRINT_H
#define PRINT_H

using namespace std;

class Print{
public:
    Print() = default;
    ostream &printOut(ostream &, const string &);
    ostream &printOut(ostream &, const unsigned &);
};
#endif
