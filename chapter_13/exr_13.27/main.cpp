#include<iostream>
#include<string>
#include"hasptr.h"

using namespace std;

int main(){
    Hasptr obj1(5, "test1");
    Hasptr obj2(obj1);
    Hasptr obj3 = obj1;

    obj1.print();
    obj2.print();
    obj3.print();
}
