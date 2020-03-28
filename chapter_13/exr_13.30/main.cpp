#include<iostream>
#include<string>
#include"hasptr.h"

using namespace std;

int main(){
    Hasptr obj1(1, "object1");
    Hasptr obj2(2, "object2");
    swap(obj1, obj2);
    obj1.print();
    obj2.print();
}
