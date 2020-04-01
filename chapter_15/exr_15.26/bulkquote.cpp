#include "bulkquote.h"

BulkQuote::BulkQuote(string str, double price, double num2, double num3): Quote(str, price), minPrice(num2), discount(num3){
}

BulkQuote::BulkQuote(BulkQuote &obj):Quote(obj), minPrice(obj.minPrice), discount(obj.discount){
    cout << "BulkQuote construvtor completed!\n";
}

double BulkQuote::price(unsigned number){
    if(number * bookPrice > minPrice)
        return number * bookPrice - discount;
    else
        return number * bookPrice;
}

void BulkQuote::debug(){
    Quote::debug();
    //cout << "Name of book:\t" << isbn() << "\nCount of book:\t" << count() << "\nPrice:\t" << bookPrice << "\n";
    cout << "Min price for discount:\t" << minPrice << "\nDiscount:\t" << discount << "\n";
}
