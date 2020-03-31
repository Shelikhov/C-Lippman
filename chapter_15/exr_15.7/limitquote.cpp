#include "limitquote.h"

LimitQuote::LimitQuote(string name, double price, double minPrice, double discount, double maxPrice):
    BulkQuote(name, price, minPrice, discount), maxPrice(maxPrice){
}

double LimitQuote::price(unsigned count){
    if(count * bookPrice < maxPrice)
        return BulkQuote::price(count);
    else
        return count * bookPrice;
}
