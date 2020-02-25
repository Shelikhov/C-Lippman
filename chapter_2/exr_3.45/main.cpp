#include <iostream>

using namespace std;

int main(){
    const size_t exSize = 2, inSize = 3;
    int arr[exSize][inSize] = {{2,3,5}, {5,7,3}};

    int value = 0;
    for(auto *exPtr = begin(arr); exPtr != end(arr); ++exPtr){
        for(auto *inPtr = begin(*(exPtr)); inPtr != end(*(exPtr)); ++inPtr){
            *inPtr = value;
            ++value;
        }
    }

    for(auto *exPtr = begin(arr); exPtr != end(arr); ++exPtr){
        for(auto *inPtr = begin(*(exPtr)); inPtr != end(*(exPtr)); ++inPtr){
            cout << *inPtr << " ";
        }
    }
}
