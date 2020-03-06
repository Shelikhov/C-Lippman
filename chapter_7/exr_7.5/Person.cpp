#include "Person.h"

Person::Person(): name(""), address(""){
}

void Person::addName(string &str){
    name = str;
    return;
}

void Person::addAddr(string &str){
    address = str;
    return;
}

void Person::showPerson(){
    cout << "Name:\t" << name << "\n" << "Address:\t" << address << endl;
    return;
}
