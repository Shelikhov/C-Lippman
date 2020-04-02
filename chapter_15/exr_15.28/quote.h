#ifndef QUOTE_H
#define QUOTE_H

#include<iostream>
#include<string>

using namespace std;

class Quote{
public:
    Quote() = default;
    Quote(Quote &);
    Quote(string, double);
    string isbn();
    unsigned count();
    virtual double price(unsigned);
    virtual ~Quote() = default;
    virtual void debug();
private:
    string bookName;
    unsigned bookCount;
protected:
    double bookPrice;
};

#endif
