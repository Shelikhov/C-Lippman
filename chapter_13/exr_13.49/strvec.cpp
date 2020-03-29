#include "strvec.h"

StrVec::StrVec(): elements(nullptr), firstFree(nullptr), cap(nullptr){
}

StrVec::StrVec(initializer_list<string> list): elements(nullptr), firstFree(nullptr), cap(nullptr){
    for(string el : list)
        this->push_back(el);
}

StrVec::StrVec(const StrVec &obj){
    pair<string*, string*> pr = alloc_n_copy(obj.elements, obj.firstFree);
    elements = pr.first;
    firstFree = pr.second;
    cap = pr.second;
    cout << "Was copy constructor!\n";
}

StrVec &StrVec::operator=(const StrVec &obj){
    pair<string*, string*> pr = alloc_n_copy(obj.elements, obj.firstFree);
    free();
    elements = pr.first;
    firstFree = pr.second;
    cap = pr.second;
    cout << "Was copy assignment operator!\n";
    return *this;
}

StrVec::StrVec(StrVec &&obj)noexcept: elements(obj.elements), firstFree(obj.firstFree), cap(obj.cap){
    obj.elements = obj.cap = obj.firstFree = nullptr;
    cout << "Was move constructor!\n";
}

StrVec &StrVec::operator=(StrVec &&obj)noexcept{
    if(this != &obj){
        free();
        elements = obj.elements;
        firstFree = obj.firstFree;
        cap = obj.cap;
        obj.elements = obj.firstFree = obj.cap = nullptr;
        cout << "Was move assignment operator!\n";
    }
    return *this;
}

void StrVec::push_back(string &str){
    check_n_alloc();
    alloc.construct(firstFree++, str);
}

void StrVec::check_n_alloc(){
    if(size() == capacity())
        reallocate();
}

size_t StrVec::size(){
    return firstFree - elements;
}

size_t StrVec::capacity(){
    return cap - elements;
}

void StrVec::printAllElem(){
    for(string *ptr = elements; ptr != firstFree; ++ptr)
        cout << *ptr << "\n";
}

void StrVec::reallocate(){
    size_t newCapacity = size() ? size() * 2 : 1;
    string *destination = alloc.allocate(newCapacity);
    string *firstEl = destination;
    string *elem = elements;
    for(size_t i = 0; i < size(); ++i)
        alloc.construct(destination++, move(*elem++));
    free();
    elements = firstEl;
    firstFree = destination;
    cap = elements + newCapacity;
}

void StrVec::free(){
    if(elements){
        for(string *ptr = firstFree; ptr != elements;)
            alloc.destroy(--ptr);
        alloc.deallocate(elements, cap - elements);
    }
}

pair<string*, string*> StrVec::alloc_n_copy(const string *beg, const string *end){
    string *firstEl = alloc.allocate(end - beg);
    return {firstEl, uninitialized_copy(beg, end, firstEl)};
}
