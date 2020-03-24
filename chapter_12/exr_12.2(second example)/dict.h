#include<iostream>
#include<memory>
#include<map>
#include<string>
#include<fstream>

#ifndef DICT_H
#define DICT_H

using namespace std;

class Dict{
public:
    Dict();
    Dict(ifstream &);//To initialize data with file which contains rules(keys and values).
    string &transform(string &);//To transform word if it exist in dictionary(map).
private:
    shared_ptr<map<string, string>> data;
};

#endif
