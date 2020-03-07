#include<iostream>
#include<string>
#include"Person.h"

using namespace std;

int main(){
    Person man;
    cout << "Enter name of person:\n";
    read(cin, man.name);
    cout << "Enter address of person:\n";
    read(cin, man.address);
    print(cout, man);
}
