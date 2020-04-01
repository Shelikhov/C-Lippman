#include<iostream>
#include<string>
#include"limitquote.h"

using namespace std;

void fun(Quote &);

int main(){
    Quote objQuote("book1", 8.0);
    BulkQuote objBulk("book2", 9.0, 21.5, 4.0);
    LimitQuote objLimit("book3", 10.0, 21.5, 4.0, 30.0);
    fun(objQuote);
    cout << "*********\n";
    fun(objBulk);
    cout << "*********\n";
    fun(objLimit);
}

void fun(Quote &obj){
    return obj.debug();
}
