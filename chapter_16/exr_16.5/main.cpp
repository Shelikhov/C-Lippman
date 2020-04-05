#include<iostream>
#include<vector>
#include<list>
#include<string>

using namespace std;

template <typename T, unsigned V> void tempPrint(T (&arr)[V]);

int main(){
    int arr[3] = {32, 87 ,2};
    tempPrint(arr);
}

template <typename T, unsigned V> void tempPrint(T (&arr)[V]){
    for(T &el : arr)
        cout << el << "\n";
}
