#include "hasptr.h"

Hasptr::Hasptr(const Hasptr &obj): val1(obj.val1), val2(obj.val2), cnt(obj.cnt){
    ++(*cnt);
}

Hasptr::Hasptr(int val, const string &str = string()): val1(val), val2(new string(str)), cnt(new size_t(1)){
}

Hasptr &Hasptr::operator=(const Hasptr &obj){
    ++(*obj.cnt);
    if(--(*cnt) == 0){//Separate pointers of this object from memory they pointed to.
        delete cnt;
        delete val2;
    }
    cnt = obj.cnt;
    val2 = obj.val2;
    val1 = obj.val1;
    return *this;
}

Hasptr::~Hasptr(){
    if(--(*cnt) == 0){
        delete cnt;
        delete val2;
    }
    cout << "Object deleted!\n";
}

void Hasptr::print(){
    cout << "val1:\t" << val1 << "\nval2:\t" << *val2 << "\ncnt:\t" << *cnt << "\n";
}
