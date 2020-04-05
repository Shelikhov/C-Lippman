#include<iostream>
#include<vector>
#include<list>
#include<string>

using namespace std;

template <typename V, typename T> T tempFind(T val1, T val2, V val3);

int main(){
    vector<int> vec{4, 8, 9, 2};
    vector<int>::iterator it = tempFind(vec.begin(), vec.end(), 9);
    cout << *it << "\n";

    list<string> lst{"test1", "test2", "test3"};
    list<string>::iterator it2 = tempFind(lst.begin(), lst.end(), "test2");
    cout << *it2 << "\n";
}

template <typename V, typename T> T tempFind(T val1, T val2, V val3){
    for(T it = val1; it != val2; ++it){
        if(*it == val3)
            return it;
    }
}
