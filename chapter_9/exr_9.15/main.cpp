#include<iostream>
#include<vector>
#include<list>
#include<string>

using namespace std;

int main(){
    vector<int> vec1{3, 5, 9};
    vector<int> vec2{3, 4, 2, 0};
    
    if(vec1 < vec2)
        cout << "first vector less than second vector\n";
    else
        cout << "first vector bigger than second vector\n";
}
