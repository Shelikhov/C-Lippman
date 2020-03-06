#include<iostream>
#include<string>

using namespace std;

#ifndef SALES_DATA_H
#define SALES_DATA_H

class Sales_data{
public:
    Sales_data();
    string &isbn();
    int &cnt();
    void combine(Sales_data &);
    void add(string);
private:
    string bookNo;
    int count;
};

#endif
