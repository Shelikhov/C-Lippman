#include <iostream>
#include <string>

using namespace std;
int main(){
    string sentence;
    cout << "Enter anything:\n";
    while(getline(cin, sentence)){
        if(sentence.empty())
            break;
        for(auto &simbol : sentence){
            if(!ispunct(simbol))
                cout << simbol;
        }
        cout << endl;
        cout << "Enter anything:\n";
    }
}
