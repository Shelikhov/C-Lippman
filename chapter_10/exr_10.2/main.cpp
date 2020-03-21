#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main(){
    list<int> lst{1, 9, 2, 4, 5, 9};
    int cnt = count(lst.begin(), lst.end(), 9);
    cout << cnt;
}
