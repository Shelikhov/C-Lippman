#include<string>
#include<vector>
#include<iostream>
#include<sstream>

#ifndef DATE_H
#define DATE_H

using namespace std;

class Date{
public:
    Date(string &);
    void printRes();
private:
    unsigned day;
    unsigned month;
    unsigned year;
    string numbers = "0123456789";
    vector<string> Months{"January", "February", "March", "April", "May", "June", "July", "August",
                          "September", "October", "November", "December"};
    vector<string> months{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug",
                          "Sep", "Oct", "Nov", "Dec"};
    int checkFormat(string &);
    void convertFormat(int &, string &);
};

#endif
