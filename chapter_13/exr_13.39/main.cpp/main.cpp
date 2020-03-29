#include<iostream>
#include"strvec.h"
#include<string>

using namespace std;

int main(){
    StrVec vec;
    string str = "test", str2 = "test2";
    vec.push_back(str);
    vec.push_back(str2);
    StrVec vec2(vec);
    vec2.printAllElem();
}
