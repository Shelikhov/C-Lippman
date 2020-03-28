#ifndef HASPTR_H
#define HASPTR_H

#include<iostream>
#include<string>
#include<new>

using namespace std;

class Hasptr{
public:
    Hasptr(int, const string&);
    Hasptr(const Hasptr&);
    Hasptr &operator=(const Hasptr &);
    ~Hasptr();
    int val1;
    string *val2;
    void print();
    size_t *cnt;
    friend void swap(Hasptr &, Hasptr &);
};

inline void swap(Hasptr &obj1, Hasptr &obj2){
    using std::swap;
    swap(obj1.val2, obj2.val2);
    swap(obj1.val1, obj2.val1);
    swap(obj1.cnt, obj2.cnt);
    cout << "Function swap completed!\n";
}
#endif
