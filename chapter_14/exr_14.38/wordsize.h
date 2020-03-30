#ifndef WORDSIZE_H
#define WORDSIZE_H

#include<string>

using namespace std;

class WordSize{
public:
    WordSize(size_t, size_t);
    bool operator()(string &);
private:
    size_t begSize;
    size_t endSize;
};

#endif
