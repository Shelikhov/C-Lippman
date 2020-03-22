#include<iostream>
#include<algorithm>
#include<vector>
//#include<string>

using namespace std;

int main(){
    auto res = [](int val1, int val2){
        return val1 + val2;
    };
    cout << res(3, 7);
}
