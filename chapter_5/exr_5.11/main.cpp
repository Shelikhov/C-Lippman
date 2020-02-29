#include<string>
#include <iostream>

using namespace std;

int main(){
    string str;
    char ch;
    int cnt = 0;
    cout << "Enter text:\n";
    getline(cin, str);
    string::iterator it = str.begin();
    while(it != str.end()){
        ch = tolower(*it);
        switch (ch){
            case ' ': case '\n': case '\t': case 'e': case 'y': case 'u': case 'i': case 'o': case 'a': ++cnt;
        default:{}
        }
        ++it;
    }
    cout << "Result: " << cnt;
}
