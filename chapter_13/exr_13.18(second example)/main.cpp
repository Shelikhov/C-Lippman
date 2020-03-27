#include<iostream>
#include<string>
#include"employee.h"

using namespace std;

int main(){
    Employee man1;
    string name = "Tom";
    Employee man2(name);

    man1.print();
    man2.print();
}
