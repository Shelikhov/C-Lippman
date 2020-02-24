#include <string>
#include <iostream>

using namespace std;

int main(){
    string str1, str2;
    cout << "Enter first sentence:\n";
    getline(cin, str1);
    cout << "Enter second sentence:\n";
    getline(cin, str2);

    if(str1 < str2) cout << "first sentence less than second\n";
    else if(str1 > str2)    cout << "second sentence less than first\n";
    else    cout << "sentences are equal\n";
}
