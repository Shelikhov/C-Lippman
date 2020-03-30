#include<iostream>
#include<string>
#include"strvec.h"

using namespace std;

int main(){
    const StrVec vec1{"test1", "test2", "test3"};
    StrVec vec2{"test4", "test5", "test6"};
    vec2[1] = vec1[1];
    for(size_t i = 0; i != vec1.size(); ++i)
        cout << vec1[i] << "\t";
    cout << "**********\n";
    vec2.printAllElem();
}
