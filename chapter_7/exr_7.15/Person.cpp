#include "Person.h"

Person::Person(istream &threadIn){
    cout << "Enter name of person:\n";
    read(threadIn, this->name);
    cout << "Enter adderess of person:\n";
    read(threadIn, this->address);
}

Person::Person(string str): name(str){
    cout << "Enter address of name " << name << ":\n";
    read(cin, this->address);
}

Person::Person(string str1, string str2): name(str1), address(str2){

}

istream &read(istream &threadIn, string &str){
    getline(threadIn, str);
    return threadIn;
}
