#include <iostream>
using namespace std;

void fun(int &p);

int main(){
    int i = 9;
    cout << "Previous value:\t" << i << endl;
    fun(i);
    cout << "Current value:\t" << i << endl;
}

void fun(int &p){
    p = 0;
}
