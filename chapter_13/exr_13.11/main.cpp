#include<iostream>
#include<string>
#include"hasptr.h"

using namespace std;

string fun(Hasptr &);

int main(){
    Hasptr obj1(5, "test");
    cout << fun(obj1);
}

string fun(Hasptr &obj){
    obj.print();
    return "Exit from function!\n";
}
