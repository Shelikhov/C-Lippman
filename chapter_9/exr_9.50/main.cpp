#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string> vec{"12", "2", "17"};
    int sum;
    for(string str : vec){
        sum += stoi(str);
    }
    cout << "Result:\t" << sum << endl;
}


