#include "Person.h"

Person::Person(istream &threadIn){
    cout << "Enter name of person:\n";
    read(threadIn, *this);
    cout << "Enter adderess of person:\n";
    read(threadIn, *this);
}

Person::Person(string str): name(str){
    cout << "Enter address of name " << name << ":\n";
    read(cin, *this);
}

Person::Person(string str1, string str2): name(str1), address(str2){
}

istream &read(istream &threadIn, Person &obj){
    getline(threadIn, obj.name);
    return threadIn;
}

string Person::retName(){
    return this->name;
}

string Person::retAddr(){
    return this->address;
}
