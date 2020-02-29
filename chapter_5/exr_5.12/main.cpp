#include<string>
#include <iostream>

using namespace std;

int main(){
    string str;
    int cnt = 0;
    cout << "Enter text:\n";
    getline(cin, str);
    string::iterator it = str.begin();
    string strTemp;
    while(it != (str.end() - 1)){
        switch (*it){
            case 'f':
                switch (*(it + 1)){
                    case 'f':
                        ++cnt;
                        break;
                    case 'i':
                        ++cnt;
                        break;
                    case 'l':
                        ++cnt;
                        break;
                }
        }
        ++it;
    }
    cout << "Result: " << cnt;
}
