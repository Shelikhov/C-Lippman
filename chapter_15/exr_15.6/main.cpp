#include<iostream>
#include<string>
#include"quote.h"
#include"bulkquote.h"

using namespace std;

double fun(Quote &, unsigned);

int main(){
    Quote objQuote("book1", 8.0);
    BulkQuote objBulk("book2", 8.0, 21.5, 4.0);
    cout << "Cost for two books:\t" <<fun(objQuote, 2) << "\n";
    cout << "Cost for four books:\t" << fun(objBulk, 4) << "\n";
}

double fun(Quote &obj, unsigned count){//obj may be as object of Quote and such as object of BulkQuote. 
    return obj.price(count);
}
