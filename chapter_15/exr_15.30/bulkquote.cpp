#include "bulkquote.h"

BulkQuote::BulkQuote(string str, double price, unsigned cnt, double num2, double num3): Quote(str, price, cnt), minPrice(num2), discount(num3){
    if(cnt * bookPrice > minPrice)
        bookPrice = cnt * bookPrice - discount;
    else
        bookPrice = cnt * bookPrice;
}

BulkQuote *BulkQuote::clone() &{
    return new BulkQuote(*this);
}

BulkQuote::BulkQuote(BulkQuote &obj):Quote(obj), minPrice(obj.minPrice), discount(obj.discount){
    cout << "BulkQuote construvtor completed!\n";
}

void BulkQuote::debug(){
    Quote::debug();
    //cout << "Name of book:\t" << isbn() << "\nCount of book:\t" << count() << "\nPrice:\t" << bookPrice << "\n";
    cout << "Min price for discount:\t" << minPrice << "\nDiscount:\t" << discount << "\n";
}
