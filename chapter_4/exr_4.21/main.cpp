#include<vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){//To redouble all odd numbers in vector.
        (*it % 2 != 0) ? (*it *= 2) : *it = *it;
    }

    for(int element : vec){//To show result.
        cout << element << " ";
    }
}
