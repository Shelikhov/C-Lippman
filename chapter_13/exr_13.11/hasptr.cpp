#include "hasptr.h"

Hasptr::Hasptr(const Hasptr &obj): val1(obj.val1), val2(new string(*(obj.val2))){
}

Hasptr::Hasptr(int val, const string &str = string()): val1(val), val2(new string(str)){
}

Hasptr &Hasptr::operator=(const Hasptr &obj){
    val1 = obj.val1;
    val2 = new string(*(obj.val2));
}

Hasptr::~Hasptr(){
    cout << "Object deleted!\n";
}

void Hasptr::print(){
    cout << "val1:\t" << val1 << "\nval2:\t" << *val2 << "\n";
}
