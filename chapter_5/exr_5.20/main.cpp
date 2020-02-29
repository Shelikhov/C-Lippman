#include <iostream>
#include <string>
using namespace std;

int main(){
    string currWord, prevWord, answer;
    do{
        cout << "Enter word:\n";
        cin >> currWord;
        if(currWord == prevWord)
            cout << "The word repeats!\n";
        prevWord = currWord;
        cout << "Are you want to continue? (y or n)\n";
        cin >> answer;
        if(answer == "n")
            break;
    }while(true);
    cout << "Bye!";
}
