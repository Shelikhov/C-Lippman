#include<iostream>
#include<string>
#include<vector>

using namespace std;

string fun(string &str, string oldval, string newval);

int main(){
    string str = "trededf";
    str = fun(str, "ed", "okd");
    cout << str;
}

string fun(string &str, string oldval, string newval){//To replace oldval to newval.
    for(string::iterator it = str.begin(); it != str.end(); ++it){
        string word;
        word.insert(word.begin(), it, it + oldval.size());
        if(word == oldval){
            it = str.erase(it, it + oldval.size());
            it = str.insert(it, newval.begin(), newval.end());
            it += newval.size() - 1;
        }
    }
    return str;
}
