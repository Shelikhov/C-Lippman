#include<iostream>
#include <vector>

using namespace std;
int main(){
    int arr[] = {3, 5, 6, 0};
    vector<int> vec(begin(arr), end(arr));
    for(int value : vec){
        cout << value << " " << endl;
    }
}
