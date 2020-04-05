#include<iostream>
#include"sales_data.h"

using namespace std;

template <typename T> bool funLess(T val1, T val2){
    return val1 < val2 ? true : false;
}

int main(){
     Sales_data obj1("test1"), obj2("test2");
     if(funLess(obj1, obj2))//for using template for Sales_data objects. class Sales_data should has operator<
         cout << "yes\n";
     else
         cout << "no\n";
}

