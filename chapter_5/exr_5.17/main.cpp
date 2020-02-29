#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1{2,3,4,5,6}, vec2{2,3,4,5,6,7,8,9,0};
    int size;
    if(vec1.size() < vec2.size())
        size = vec1.size();
    else
        size = vec2.size();
    for(int i = 0; i < size; ++i){
        if(vec1[i] != vec2[i]){
            cout << "Vectors different.";
            return 0;
        }
    }
    if(vec1.size() < vec2.size())
        cout << "First vector is prefix of second.";
    else
        cout << "Second vector is prefix of first.";
}
