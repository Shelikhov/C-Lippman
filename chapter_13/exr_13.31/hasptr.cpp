#include "hasptr.h"

Hasptr::Hasptr(const Hasptr &obj): id(obj.id), name(obj.name), cnt(obj.cnt){
    ++(*cnt);
}

Hasptr::Hasptr(int val, const string &str = string()): id(val), name(new string(str)), cnt(new size_t(1)){
}

Hasptr &Hasptr::operator=(const Hasptr &obj){
    ++(*obj.cnt);
    if(--(*cnt) == 0){//Separate pointers of this object from memory they pointed to.
        delete cnt;
        delete name;
    }
    cnt = obj.cnt;
    name = obj.name;
    id = obj.id;
    return *this;
}

bool Hasptr::operator<(const Hasptr &obj){
    return this->id < obj.id ? true : false;
}

Hasptr::~Hasptr(){
    if(--(*cnt) == 0){
        delete cnt;
        delete name;
    }
}

void Hasptr::print(){
    cout << "val1:\t" << id << "\nval2:\t" << *name << "\ncnt:\t" << *cnt << "\n";
}
