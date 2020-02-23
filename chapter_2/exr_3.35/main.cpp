#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[5];
    int *ptr1 = begin(arr), *ptr2 = end(arr);
    while(ptr1 != ptr2){
        *ptr1 = 0;
        ++ptr1;
    }

    while(ptr1 > begin(arr)){
        --ptr1;
        cout << *ptr1 << endl;
    }
}
