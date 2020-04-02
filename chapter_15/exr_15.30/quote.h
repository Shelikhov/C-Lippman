#ifndef QUOTE_H
#define QUOTE_H

#include<iostream>
#include<string>
#include<utility>
#include<new>
#include<memory>

using namespace std;

class Quote{
public:
    Quote() = default;
    Quote(Quote &);
    Quote(string, double, unsigned);
    virtual Quote *clone()&;
    string isbn();
    unsigned count();
    double price();
    virtual ~Quote() = default;
    virtual void debug();
private:
    string bookName;
    unsigned bookCount;
protected:
    double bookPrice;
};

#endif
