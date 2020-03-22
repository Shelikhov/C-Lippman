#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iterator>
#include<fstream>

using namespace std;

int main(){
    vector<int> vec{30, 50, 61, 83, 9};
    auto it = find_if(vec.crbegin(), vec.crend(), [](int val)->bool{return (val % 10) == 0;});
    cout << *it;
}
