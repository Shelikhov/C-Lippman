#include<iostream>
#include<string>
#include"Person.h"

using namespace std;

int main(){
    Person man;
    string name, address;
    cout << "Enter name of person:\n";
    getline(cin, name);
    cout << "Enter address of person:\n";
    getline(cin, address);

    man.addName(name);
    man.addAddr(address);

    cout << "Result:\n";
    man.showPerson();
}
