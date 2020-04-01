#ifndef LIMITQUOTE_H
#define LIMITQUOTE_H

#include"bulkquote.h"

using namespace std;

class LimitQuote: public BulkQuote{
public:
    LimitQuote() = default;
    LimitQuote(string, double, double, double, double);
    LimitQuote(LimitQuote &);
    ~LimitQuote() = default;
    double price(unsigned) override;
    void debug() override;
private:
    double maxPrice;
};

#endif
