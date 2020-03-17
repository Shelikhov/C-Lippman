#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    
    cout << "Result for empty vector:\n";
    cout << "vec[0]:\t" << vec[0] << endl;
    cout << "vec.at(0):\t" << vec.at(0) << endl;
    cout << "vec.begin():\t" << *vec.begin() << endl;
    cout << "vec.front():\t" << vec.front() << endl;
}
