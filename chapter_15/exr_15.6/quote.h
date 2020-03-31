#ifndef QUOTE_H
#define QUOTE_H

#include<iostream>
#include<string>

using namespace std;

class Quote{
public:
    Quote() = default;
    Quote(string, double);
    string isbn();//To show name of book.
    unsigned count();//To show count of books.
    virtual double price(unsigned);//To count cost for unsigned books.
    virtual ~Quote() = default;
private:
    string bookName;
    unsigned bookCount;
protected:
    double bookPrice;
};

#endif
