#include <iostream>

using namespace std;

int main(){
    int arr[10];
    for(size_t ind = 0; ind < 10; ++ind){
        arr[ind] = ind;
    }

    for(size_t ind : arr){
        cout << ind << endl;
    }
}
