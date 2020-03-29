#include<iostream>
#include"strvec.h"
#include<string>

using namespace std;

int main(){
    StrVec vec{"str1", "str2", "str3", "str4"};
    StrVec vec2(vec);
    vec2.printAllElem();
}
