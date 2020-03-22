#include<iostream>
#include<algorithm>
#include<vector>
//#include<string>

using namespace std;

int main(){
    vector<string> vec{"sadhkkl", "wd", "wd", "sad", "sdwqw", "a", "sdugullmm", "a"};
    int cnt = count_if(vec.begin(), vec.end(), [](string &str){return str.size() >= 6;});
    cout << cnt;
}
