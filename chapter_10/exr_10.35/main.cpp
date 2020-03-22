#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iterator>
#include<fstream>

using namespace std;

int main(){
    vector<int> vec{3, 5, 6, 8, 9};
    for(vector<int>::iterator it = vec.end() - 1; it >= vec.begin(); --it)
        cout << *it << "\t";
}
