#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1, str2, resStr;
    cout << "Enter first string:\n";
    cin >> str1;
    cout << "Enter first string:\n";
    cin >> str2;
    resStr = str1 + str2;

    char *arrPtr = new char[resStr.size()];
    string::iterator it = resStr.begin();
    for(char *ptr = arrPtr; ptr != arrPtr + resStr.size() && it != resStr.end(); ++it, ++ptr)
        *ptr = *it;
    for(char *ptr = arrPtr; ptr != arrPtr + resStr.size(); ++ptr)
        cout << *ptr << "\n";
    delete [] arrPtr;
}
