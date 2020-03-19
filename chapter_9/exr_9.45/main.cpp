#include<iostream>
#include<string>
#include<vector>

using namespace std;

string fun(string &name, string prefix, string suffix);

int main(){
    string name, prefix, suffix;
    cout << "Enter name:\n";
    cin >> name;
    cout << "Is this Mr. or Ms.:\n";
    cin >> prefix;
    cout << "Enter suffix:\n";
    cin >> suffix;
    cout << "Result:\n" << fun(name, prefix, suffix) << endl;
}

string fun(string &name, string prefix, string suffix){//To replace oldval to newval.
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(" ");
    name.append(suffix);
    return name;
}
