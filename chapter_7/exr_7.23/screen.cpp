#include "screen.h"

Screen::Screen(string::size_type val1, string::size_type val2):
    height(val1), width(val2), content(height * width, ' '), cursor(0){
}

Screen::Screen(string::size_type val1, string::size_type val2, char symbol):
    height(val1), width(val2), content(height * width, symbol), cursor(0){
}

char &Screen::get(){
    return content[cursor];
}

char &Screen::get(string::size_type r, string::size_type c){
    string::size_type row = r * width;
    cursor = row + c;
    return content[cursor];
}

Screen &Screen::move(string::size_type r, string::size_type c){
    string::size_type row = r * width;
    cursor = row + c;
    return *this;
}

Screen &Screen::showWin(ostream &threadOut){
    doShowWin(threadOut);
    return *this;
}

const Screen &Screen::showWin(ostream &threadOut) const{
    doShowWin(threadOut);
    return *this;
}

Screen &Screen::insert(string & str){
    for( char ch : str){
        if(cursor != content.size()){
            content[cursor] = ch;
        }else{
            break;
        }
        ++cursor;
    }
    return *this;
}

void Screen::doShowWin(ostream &threadOut) const{
    threadOut << content << endl;
    return;
}
