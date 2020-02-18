#include <iostream>
#include <string>

using namespace std;
int main(){
    string sentence;
    cout << "Enter anything:\n";
    while(getline(cin, sentence)){
        if(sentence.empty())
            break;
        for(auto &simbol : sentence){  //replace each letter and number with simbol 'X'
            if(isalnum(simbol)){
                simbol = 'X';
            }
        }
        cout << sentence << endl;
        cout << "Enter anything:\n";
    }
}
