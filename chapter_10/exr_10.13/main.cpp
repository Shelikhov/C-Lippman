#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool moreThanFive(string &);

int main(){
    vector<string> vec{"adwd", "ebjbew", "sdnj", "aaed"};
    partition(vec.begin(), vec.end(), moreThanFive);
    for(string str : vec)
        cout << str << "\t";
}

bool moreThanFive(string &str){
    return str.size() > 5;
}
