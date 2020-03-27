#include<iostream>
#include<string>
#include"hasptr.h"

using namespace std;

int main(){
    Hasptr obj1(5, "test");
    Hasptr obj2 = obj1;
    obj2.print();
}
