#ifndef BULKQUOTE_H
#define BULKQUOTE_H

#include"quote.h"

using namespace std;

class BulkQuote: public Quote{
public:
    BulkQuote() = default;
    BulkQuote(string, double, double, double);
    double price(unsigned) override;
    ~BulkQuote() = default;
    void debug() override;
private:
    double minPrice;
    double discount;
};

#endif
