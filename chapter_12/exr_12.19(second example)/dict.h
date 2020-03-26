#include<iostream>
#include<memory>
#include<map>
#include<string>
#include<fstream>
#include<algorithm>
#include<utility>

#ifndef DICT_H
#define DICT_H

using namespace std;

class Dict{
    friend class Dictptr;
public:
    Dict();
    Dict(ifstream &);//To initialize data with file which contains rules(keys and values).
    string &transform(string &);
private:
    void showAll();
    shared_ptr<map<string, string>> data;
};

#endif
