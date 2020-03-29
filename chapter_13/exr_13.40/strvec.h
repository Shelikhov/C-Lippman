#ifndef STRVEC_H
#define STRVEC_H

#include<utility>
#include<string>
#include<memory>
#include<iostream>

using namespace std;

class StrVec{
public:
    StrVec();
    StrVec(initializer_list<string>);
    StrVec(const StrVec &);
    StrVec &operator=(const StrVec&);
    void printAllElem();
    void push_back(string &);//To put string to the end of array.
private:
    void free();//To free whole storage.
    allocator<string> alloc;
    pair<string*, string*> alloc_n_copy(const string *, const string *);
    void check_n_alloc();//To check whether the exist a free storage for one new string.
    size_t size();//Number of existing elements in array.
    size_t capacity();//Capacity of whole string array.
    void reallocate();//To allocate new capacity.
    string *elements;//First existing element.
    string *firstFree;//First free element after existing last element.
    string *cap;//Last element into allocated array.
};

#endif
