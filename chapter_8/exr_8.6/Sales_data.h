#include<iostream>
#include<string>
#include"read.h"

using namespace std;

#ifndef SALES_DATA_H
#define SALES_DATA_H

class Sales_data{
public:
    Sales_data() = default;
    Sales_data(string);
    Sales_data(string, int);
    Sales_data(string, int, double);
    Sales_data(istream &);
    string &retName();
    int &retCount();
    double &retCost();
    void add();
    void add(int &val);
private:
    string name;
    int count;
    double cost;
    Read objRead;
};

#endif
