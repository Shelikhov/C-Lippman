#include<iostream>

using namespace std;

int *fun(int *, int);

int main(){
    int arr[10];
    for(int i = 0; i != 10; ++i)
        *(fun(arr, i)) = i;
    for(int i : arr)
        cout << i << endl;
}

int *fun(int *ptr, int ind){//To return array element with index ind.
    return ptr + ind;
}
