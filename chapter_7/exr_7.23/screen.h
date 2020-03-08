#include<string>
#include<iostream>
#include"print.h"

#ifndef SCREEN_H
#define SCREEN_H

using namespace std;

class Screen{
public:
    Screen() = default;
    Screen(string::size_type, string::size_type, char);
    char &get();//To get cursor value.
    char &get(string::size_type r, string::size_type c);//To get value in the specified coordinates (r is row, c is column).
    void move(string::size_type, string::size_type);//To move cursor in the specified coordinates.
    void showWin(ostream &);//To show window content.
    void insert(string &);//To insert text into window.
private:
    string::size_type height, width, cursor;
    string content;
    Print obj;
};

#endif
