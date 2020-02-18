#include <iostream>
#include <string>

using namespace std;
int main(){
    string s;
    while(getline(cin, s)){
        if(s.empty()){
            cout << "Empty enter." << endl;
            break;
        }else
            cout << "result:\n" << s << endl;
    }
}
