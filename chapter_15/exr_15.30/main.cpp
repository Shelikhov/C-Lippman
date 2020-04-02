#include<iostream>
#include<string>
#include"bulkquote.h"
#include<memory>
#include"basket.h"

using namespace std;

int main(){
     Quote obj1("book1", 23.0, 2);
     BulkQuote obj2("book2", 12, 2, 15, 4);
     Basket bas;
     bas.addItems(obj1);
     bas.addItems(obj2);
     bas.printAll();
}

