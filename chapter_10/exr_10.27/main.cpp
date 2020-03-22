#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<functional>
#include<list>

using namespace std;

int main(){
    vector<string> vec{"sadhkkl", "wd", "wd", "sad", "sdwqw", "a", "sdugullmm", "a"};
    list<string> lst1, lst2;

    sort(vec.begin(), vec.end());
    unique_copy(vec.begin(), vec.end(), back_inserter(lst1));
    for_each(lst1.begin(), lst1.end(), [](string &str){cout << str << " ";});

    cout << "\n";
    unique_copy(vec.begin(), vec.end(), front_inserter(lst2));
    for_each(lst2.begin(), lst2.end(), [](string &str){cout << str << " ";});
}
