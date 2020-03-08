#include<iostream>
#include<string>
#include"screen.h"

using namespace std;

int main(){
    Screen myWin(24, 50, 'c');//To create window.
    const Screen myWin2(23, 34, 'H');
    myWin.showWin(cout);//To show window.
    cout << myWin.get();//To show cursor value.
    
    cout << "Enter word into window:\n";
    string word;
    getline(cin, word);

    myWin.move(2, 7).insert(word).showWin(cout);//To write text in the window.
    cout << "\n\n\n";
    myWin2.showWin(cout);
    
    myWin.showWin(cout);
    cout << myWin.get();
}
