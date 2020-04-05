#include<iostream>

using namespace std;

template <typename T> bool funLess(T val1, T val2);

int main(){
     int a = 6;
     int b = 9;
     if(funLess(a, b))
         cout << "yes\n";
     else
         cout << "no\n";
}

template <typename T> bool funLess(T val1, T val2){
    return val1 < val2 ? true : false;
}
