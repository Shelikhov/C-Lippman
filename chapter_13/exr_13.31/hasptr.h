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
    bool operator<(const Hasptr &);
    ~Hasptr();
    int id;
    string *name;
    void print();
    size_t *cnt;
    friend void swap(Hasptr &, Hasptr &);
};

inline void swap(Hasptr &obj1, Hasptr &obj2){
    using std::swap;
    swap(obj1.name, obj2.name);
    swap(obj1.id, obj2.id);
    swap(obj1.cnt, obj2.cnt);
    cout << "Function swap completed!\n";
}
#endif
