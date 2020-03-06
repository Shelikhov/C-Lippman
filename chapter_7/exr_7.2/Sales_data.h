#include<iostream>
#include<string>

using namespace std;

#ifndef SALES_DATA_H
#define SALES_DATA_H

class Sales_data{
public:
    Sales_data();
    const string &isbn() const;//const after parameters means that fun isbn() can not change arguments within youself.
    int &cnt();
    Sales_data &combine(Sales_data &);
    void add(string);
private:
    string bookNo;//The name of book.
    int count;//Count of books.
};

#endif
