#include<iostream>

using namespace std;
int main(){
    const size_t exSize = 2, inSize = 3;
    int arr[exSize][inSize];

    int value = 0;
    for(int (&ref)[inSize] : arr){
        for(int (&ref2) : ref){
            ref2
                    = value;
            ++value;
        }
    }

    for(int (&ref)[inSize] : arr){
        for(int ind : ref){
            cout << ind << " ";
        }
    }
}
