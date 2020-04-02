#include "basket.h"

Basket::Basket(){
}

void Basket::addItems(Quote &obj){
    items.insert(make_shared<Quote>(obj));
}

void Basket::printAll(){
    double totalPrice = 0;
    for(const shared_ptr<Quote> &el : items){
        totalPrice += el->price() * el->count();
        cout << "Book name:\t" << el->isbn() << "\nCount:\t" << el->count() << "\nPrice:\t" << el->price() << "\n";

    }
    cout << "Total price:\t" << totalPrice << "\n";
}

bool Basket::compare(shared_ptr<Quote> &lhs, shared_ptr<Quote> &rhs){
    return lhs->isbn() < rhs->isbn();
}
