#include<iostream>
#include<new>
#include<vector>

using namespace std;

vector<int> *fun1();
vector<int> *fun2();

int main(){
    vector<int> *ptr = fun2();
    for(vector<int>::iterator it = ptr->begin(); it != ptr->end(); ++it)
        cout << *it << " ";
    delete ptr;
}

vector<int> *fun1(){
    return new vector<int>;
}

vector<int> *fun2(){
    vector<int> *ptr = fun1();
    *ptr = {2,3,5};
    return ptr;
}
