#include<iostream>
#include<vector>
#include<deque>
#include<string>

using namespace std;

int main(){
    string record;
    deque<string> d;
    deque<string>::iterator it = d.begin();

    cout << "Enter string:\n";
    while(getline(cin, record)){//To insert elements from cin to deque.
        cout << "Enter string:\n";
        it = d.insert(it, record);
    }

    for(string str : d)
        cout << str << "\n";
}
