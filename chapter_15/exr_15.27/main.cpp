#include<iostream>
#include<string>
#include"limitquote.h"

using namespace std;

void fun(Quote &);

int main(){
    LimitQuote objLimit1("book3", 10.0, 21.5, 4.0, 30.0);
    LimitQuote objLimit2(objLimit1);
    objLimit2.print();
}

void fun(Quote &obj){
    return obj.debug();
}
