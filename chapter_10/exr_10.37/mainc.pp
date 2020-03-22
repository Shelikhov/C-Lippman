#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iterator>
#include<list>

using namespace std;

int main(){
    vector<int> vec{30, 50, 61, 83, 9, 2, 4, 2, 0, 1};
    list<int> lst;
    copy(vec.crbegin(), vec.crend() - 3, back_inserter(lst));
    for_each(lst.begin(), lst.end(), [](int val){cout << val << "\t";});
}
