#ifndef BASKET_H
#define BASKET_H

#include<set>
#include<memory>
#include"quote.h"

using namespace std;

class Basket{
public:
    Basket();
    void addItems(Quote &);
    void printAll();
private:
    static bool compare(shared_ptr<Quote> &, shared_ptr<Quote> &);
    multiset<shared_ptr<Quote>> items;
};

#endif
