#include<iostream>
#include<memory>
#include<vector>

using namespace std;

shared_ptr<vector<int>> fun1();
shared_ptr<vector<int>> fun2();

int main(){
    shared_ptr<vector<int>> ptr = fun2();
    for(vector<int>::iterator it = ptr->begin(); it != ptr->end(); ++it)
        cout << *it << " ";
}

shared_ptr<vector<int>> fun1(){
    return  make_shared<vector<int>>();
}

shared_ptr<vector<int>> fun2(){
    shared_ptr<vector<int>> ptr = fun1();
    *ptr = {2,3,5};
    return ptr;
}
