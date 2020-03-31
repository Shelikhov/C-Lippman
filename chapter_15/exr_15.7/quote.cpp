#include "quote.h"

Quote::Quote(string str, double price): bookName(str), bookPrice(price){
}

string Quote::isbn(){
    return bookName;
}

double Quote::price(unsigned number){
    return number * bookPrice;
}

unsigned Quote::count(){
    return bookCount;
}
