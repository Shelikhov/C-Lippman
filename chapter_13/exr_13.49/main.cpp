#include<iostream>
#include"strvec.h"
#include<string>

using namespace std;

StrVec fun();

int main(){
    StrVec vec{"str1", "str2", "str3", "str4"};
    StrVec vec2;
    vec2 = fun();
    vec2.printAllElem();
}

StrVec fun(){
    StrVec vec{"str5", "str6"};
    return vec;
}
