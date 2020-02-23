#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[10];
    for(size_t ind = 0; ind < 10; ++ind){
        arr[ind] = ind;
    }

    vector<int> vec;
    for(size_t ind : arr){
        vec.push_back(ind);
    }

    for(auto ind : vec){
        cout << ind << endl;
    }
}
