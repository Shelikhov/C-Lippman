#include<iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> vec;
    int size = 5;
    for(int value = 0; value < size; ++value)//To initialize vector.
        vec.push_back(value);

    int arr[size];
    for(int ind = 0; ind < size; ++ind)//To initialize array
        arr[ind] = vec[ind];

    for(int value : arr){//To show array.
        cout << value << endl;
    }
}
