#include <iostream>

using namespace std;

int main(){
    const size_t exSize = 2, inSize = 3;
    int arr[exSize][inSize] = {{2,3,5}, {5,7,3}};

    int value = 0;
    for(int (*exPtr)[inSize] = begin(arr); exPtr != end(arr); ++exPtr){
        for(int *inPtr = begin(*(exPtr)); inPtr != end(*(exPtr)); ++inPtr){
            *inPtr = value;
            ++value;
        }
    }

    for(int (*exPtr)[inSize] = begin(arr); exPtr != end(arr); ++exPtr){
        for(int *inPtr = begin(*(exPtr)); inPtr != end(*(exPtr)); ++inPtr){
            cout << *inPtr << " ";
        }
    }

}
