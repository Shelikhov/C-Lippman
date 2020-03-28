#include<iostream>
#include<string>
#include"hasptr.h"
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    Hasptr obj1(32, "object1");
    Hasptr obj2(21, "object2");
    Hasptr obj3(12, "object3");

    vector<Hasptr> vec;
    vec.push_back(obj1);
    vec.push_back(obj2);
    vec.push_back(obj3);

    for(Hasptr &el : vec)
        cout << "object name:\t" << *el.name << "\nobject id:\t" << el.id << "\n";

    sort(vec.begin(), vec.end());
    cout << "After sort:\n";

    for(Hasptr &el : vec)
        cout << "object name:\t" << *el.name << "\nobject id:\t" << el.id << "\n";
}
