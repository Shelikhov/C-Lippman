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
    StrVec(const StrVec &);//Copy constructor.
    StrVec &operator=(const StrVec&);//Copy assignment operator.
    StrVec &operator=(initializer_list<string>);
    StrVec(StrVec &&)noexcept;//Move constructor.
    StrVec &operator=(StrVec &&)noexcept;//Move assignment operator.
    string &operator[](size_t);
    const string &operator[](size_t) const;
    void printAllElem();
    size_t size()const;//Number of existing elements in array.
    void push_back(const string &);//To add element to container with l_value.
    void push_back(string &&);//To add element to container with move(r_value).
private:
    void free();//To free whole storage.
    allocator<string> alloc;
    pair<string*, string*> alloc_n_copy(const string *, const string *);
    void check_n_alloc();//To check whether the exist a free storage for one new string.
    size_t capacity();//Capacity of whole string array.
    void reallocate();//To allocate new capacity.
    string *elements;//First existing element.
    string *firstFree;//First free element after existing last element.
    string *cap;//Last element into allocated array.
};

#endif
