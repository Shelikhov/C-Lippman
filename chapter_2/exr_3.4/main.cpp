#include <iostream>
#include <string>

using namespace std;
int main(){
    string s1, s2;
    cout << "Enter first string:\n";
    cin >> s1;
    cout << "Enter second string:\n";
    cin >> s2;
    cout << "Result:\n";

    if(s1 == s2)
        cout << "strings equal\n";
    else if(s1 > s2)
        cout << "s1 longer s2\n";
    else if(s1 < s2)
        cout << "s2 longer s1\n";
    cout << "s1 size: " << s1.size() << "\ns2 size: " << s2.size();

}
