#include<iostream>
#include<vector>

using namespace std;

void fun(vector<int>::iterator begIt, vector<int>::iterator endIt);

int main(){
    vector<int> vec;
    for(int i = 0; i < 10; ++i){
        vec.push_back(i);
    }

    fun(vec.begin(), vec.end());
}

void fun(vector<int>::iterator begIt, vector<int>::iterator endIt){//Recursive function for output vector.
    if(begIt != endIt){
        cout << *begIt << endl;
        ++begIt;
        fun(begIt, endIt);
    }
    return;
}
