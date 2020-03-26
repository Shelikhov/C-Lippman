#include<memory>
#include<map>
#include"dict.h"

#ifndef DICTPTR_H
#define DICTPTR_H

using namespace std;

class Dictptr{
public:
    Dictptr();
    Dictptr(Dict &);
private:
    bool checkPtr();
    weak_ptr<map<string, string>> wptr;
};

#endif
