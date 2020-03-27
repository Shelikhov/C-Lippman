#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include<iostream>

using namespace std;

class Employee{
public:
    Employee();
    Employee(const string);
    Employee(Employee&);//Copy constructor.
    Employee& operator=(Employee&);//Asiggnment operator.
    void print();//To output name and id of employee.
    string name;
    unsigned id;
private:
    static int statVal;//For unique id of each employee.
};

#endif
