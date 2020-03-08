#include "screen.h"

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

void Screen::move(string::size_type r, string::size_type c){
    string::size_type row = r * width;
    cursor = row + c;
    return;
}

void Screen::showWin(ostream &threadOut){
    obj.printOut(threadOut, content);
    return;
}

void Screen::insert(string & str){
    for( char ch : str){
        if(cursor != content.size()){
            content[cursor] = ch;
        }else{
            break;
        }
        ++cursor;
    }
}
