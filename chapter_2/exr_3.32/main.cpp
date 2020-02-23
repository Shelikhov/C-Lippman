#include <iostream>

using namespace std;

int main(){
    int arr[10];
    for(size_t ind = 0; ind < 10; ++ind){
        arr[ind] = ind;
    }

    int arr2[10];
    for(int ind = 0; ind < 10; ++ind){
        arr2[ind] = arr[ind];
    }

    for(size_t ind : arr2){
        cout << ind << endl;
    }
}
