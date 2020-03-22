#include<iostream>
#include<algorithm>
#include<vector>
//#include<string>

using namespace std;

int main(){
    int localVal = 9;
    auto res = [localVal](int val){
        return localVal + val;
    };
    cout << res(7);
}
