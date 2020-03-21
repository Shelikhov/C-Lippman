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
    string word;
    for(string::size_type ind = 0; ind != str.size() - oldval.size() + 1; ++ind){
        word.replace(0, oldval.size(), str, ind, oldval.size());
        if(word == oldval){
            str.replace(ind, oldval.size(), newval);
            ind += newval.size() - 1;
        }
    }
    return str;
}
