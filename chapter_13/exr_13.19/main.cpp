#include<iostream>
#include<string>
#include"employee.h"

using namespace std;

int main(){
    string name = "Tom";

    Employee man1;
    Employee man2(name);
    Employee man3(man2);
    Employee man4 = man3;

    man1.print();
    man2.print();
    man3.print();
    man4.print();
}
