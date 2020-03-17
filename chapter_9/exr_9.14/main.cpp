#include<iostream>
#include<vector>
#include<list>
#include<string>

using namespace std;

int main(){
    list<char*> lst = {"wer", "sdf", "asd"};
    vector<string> vec;
    
    vec.assign(lst.begin(), lst.end());//To initialize elements of vec elements of lst.
    
    for(string str : vec){
        cout << str << "\n";
    }
}
