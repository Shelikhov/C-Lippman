#include <iostream>
#include<string>
using namespace std;

bool fun(const string &str);

int main(){
    cout << "Enter text:\n";
    string str;
    getline(cin, str);
    if(fun(str))
        cout << "Result: the text has upper letters!" << endl;
    else
        cout << "Result: the text hasn't excist upper letters!" << endl;
}

bool fun(const string &str){
    for(char ch : str){
        int i = ch;
        if(i >= 65 && i <= 90)
            return true;
    }
    return false;
}
