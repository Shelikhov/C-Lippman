#include<iostream>
#include<string>
#include"Read.h"

using namespace std;

#ifndef SALES_DATA_H
#define SALES_DATA_H

class Sales_data{
public:
    Sales_data() = default;
    Sales_data(string);
    Sales_data(string, int);
    Sales_data(istream &);
    void add(int &val);
    string bookName;
    int count;
private:
    Read objRead;
};

#endif
