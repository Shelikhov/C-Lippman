#include "dictptr.h"

Dictptr::Dictptr(){
}

Dictptr::Dictptr(Dict &obj): wptr(obj.data){
    if(checkPtr())
        obj.showAll();
    else
        cout << "Dictionary is empty!\n";
}

bool Dictptr::checkPtr(){//To check whether there is a shared pointer to an object. 
    if(wptr.use_count() == 0)
        return false;
    else
        return true;
}
