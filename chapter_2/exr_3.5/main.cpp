#include <iostream>
#include <string>

using namespace std;
int main(){
    string s1, s2, s3;
    cout << "Enter first string:\n";
    cin >> s1;
    cout << "Enter second string:\n";
    cin >> s2;
    s3 = s1 + " " + s2;
    cout << "Result:\n";
    cout << s3;
}
