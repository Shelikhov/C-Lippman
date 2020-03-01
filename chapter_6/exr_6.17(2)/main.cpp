#include <iostream>
#include<string>
using namespace std;

void fun(string &str);

int main(){
    cout << "Enter text:\n";
    string str;
    getline(cin, str);
    fun(str);
    cout << "Result:\n" << str << endl;
}

void fun(string &str){//To change text to upper case.
    for(char &ch : str){
        ch = toupper(ch);
    }
}
