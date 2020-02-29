#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    string answer;
    do{
        cout << "Enter sentence 1:\n";
        cin >> str1;
        cout << "Enter sentence 2:\n";
        cin >> str2;
        if(str1 < str2)
            cout << "First sentence less than second!\n";
        else if(str1 > str2)
            cout << "Second sentence less than first!\n";
        else
            cout << "Size of sentences is equal!\n";
        cout << "Are you want to continue? (y or n):\n";
        cin >> answer;
    }while(answer == "y");
    cout << "Bye!";
}
