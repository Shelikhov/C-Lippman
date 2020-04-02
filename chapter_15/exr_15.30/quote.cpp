#include "quote.h"

Quote::Quote(Quote &obj): bookName(obj.bookName), bookCount(obj.bookCount), bookPrice(obj.bookPrice){
}

Quote::Quote(string str, double price, unsigned cnt): bookName(str), bookCount(cnt), bookPrice(price){
}

Quote *Quote::clone() &{
    return new Quote(*this);
}

string Quote::isbn(){
    return bookName;
}

double Quote::price(){
    return bookPrice;
}

unsigned Quote::count(){
    return bookCount;
}

void Quote::debug(){
    cout << "Name of book:\t" << bookName << "\nCount of books:\t" << bookCount << "\nPrice:\t" << bookPrice << "\n";
}
