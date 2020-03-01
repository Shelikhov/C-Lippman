#include <iostream>
#include<string>
using namespace std;

void fun(const int &val, const int *begPtr, const int *endPtr);

int main(){
    int i = 8, j[2] = {3, 9};
    fun(i, begin(j), end(j));
}

void fun(const int &val, const int *begPtr, const int *endPtr){//To output array elements.
    cout << "value:\t" << val << endl;
    cout << "Array:\n";
    while(begPtr != endPtr){
        cout << *begPtr++ << "\t";
    }
}
