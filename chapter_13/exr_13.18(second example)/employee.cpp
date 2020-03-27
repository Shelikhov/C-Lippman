#include "employee.h"

Employee::Employee(): name("undefined"), id(++statVal){
}

Employee::Employee(const string str): name(str), id(++statVal){
}

void Employee::print(){
    cout << "Name of employee:\t" << name << "\nID:\t" << id << "\n";
}

int Employee::statVal = 0;
