#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<functional>

using namespace std;
using namespace std::placeholders;

bool isBigger(string &, string::size_type);

int main(){
    vector<string> vec{"sadhkkl", "wd", "wd", "sad", "sdwqw", "a", "sdugullmm", "a"};
    int cnt = count_if(vec.begin(), vec.end(), bind(isBigger, _1, 6));
    cout << cnt;
}

bool isBigger(string &str, string::size_type sz){
    return str.size() > sz;
}
