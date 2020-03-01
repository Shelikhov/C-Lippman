#include <iostream>
using namespace std;

int fun(initializer_list<int>);

int main(){
    cout << fun({3, 6, 8, 2, 3}) << endl;
}

int fun(initializer_list<int> list){
    int sum = 0;
    for(int i : list){
        sum += i;
    }
    return sum;
}
