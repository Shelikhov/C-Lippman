#include<iostream>

using namespace std;

int main(){
    const size_t exSize = 2, inSize = 3;
    int arr[exSize][inSize];
    
    int value = 0;
    for(size_t i = 0; i < exSize; ++i){//To initialize values in array.
        for(size_t j = 0; j < inSize; ++j){
            arr[i][j] = value;
            ++value;
        }
    }

    for(size_t i = 0; i < exSize; ++i){//T output array. 
        for(size_t j = 0; j < inSize; ++j){
            cout << arr[i][j] << " ";
        }
    }
}
