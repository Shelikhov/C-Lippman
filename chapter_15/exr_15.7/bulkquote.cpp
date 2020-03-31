#include "bulkquote.h"

BulkQuote::BulkQuote(string str, double price, double num2, double num3): Quote(str, price), minPrice(num2), discount(num3){
}

double BulkQuote::price(unsigned number){
    if(number * bookPrice > minPrice)
        return number * bookPrice - discount;
    else
        return number * bookPrice;
}
