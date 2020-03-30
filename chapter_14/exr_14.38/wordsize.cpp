#include "wordsize.h"

WordSize::WordSize(size_t num1, size_t num2): begSize(num1), endSize(num2){
}

bool WordSize::operator()(string &word){
    return word.size() <= endSize && word.size() >= begSize ? true : false;
}
