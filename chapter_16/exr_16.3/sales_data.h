#include<iostream>
#include<string>
#include<vector>

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
    string &retName(Sales_data &);
    int &retCount(Sales_data &);
    double &retCost(Sales_data &);
    bool operator<(Sales_data &);
    void add();
    void add(int &val);
private:
    string name;
    int count;
    double cost;
};

#endif
