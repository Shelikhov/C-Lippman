#include<iostream>
#include<string>
#include"screen.h"

using namespace std;

int main(){
    Screen myWin(24, 50, 'c');//To create window.
    myWin.showWin(cout);//To show window.
    cout << myWin.get();//To show cursor value.
    
    cout << "Enter word into window:\n";
    string word;
    getline(cin, word);

    myWin.insert(word);//To write text in the window.
    
    myWin.showWin(cout);
    cout << myWin.get();
}
