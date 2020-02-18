#include <iostream>
#include <string>

using namespace std;
int main(){
    string sentence;
    string::size_type n = 0;
    cout << "Enter anything:\n";
    while(getline(cin, sentence)){
        if(sentence.empty())
            break;
        while(n != sentence.size()){ //replace each letter and number with 'X'
            if(isalnum(sentence[n]))
                sentence[n] = 'X';
            ++n;
        }
        cout << sentence << endl;
        cout << "Enter anything:\n";
    }
}
