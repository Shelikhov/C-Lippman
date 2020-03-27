#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include<iostream>

using namespace std;

class Employee{
public:
    Employee();
    Employee(const string);
    void print();
    string name;
    unsigned id;
private:
    static int statVal;
};

#endif
