#include "quote.h"

Quote::Quote(Quote &obj): bookName(obj.bookName), bookCount(obj.bookCount), bookPrice(obj.bookPrice){
    cout << "Quote constructor completed!\n";
}

Quote::Quote(string str, double price): bookName(str), bookCount(0), bookPrice(price){
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

void Quote::debug(){
    cout << "Name of book:\t" << bookName << "\nCount of books:\t" << bookCount << "\nPrice:\t" << bookPrice << "\n";
}
