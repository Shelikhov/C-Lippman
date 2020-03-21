#include<iostream>
#include<string>
#include<vector>
#include"date.h"

using namespace std;

int main(){
    string date;
    cout << "Enter date in one of these formats:\nExamples:\nJanuary 1, 1234\nJan 23, 3456\n2/3/3456\n";
    getline(cin, date);
    Date d(date);

    cout << "Result:\t" << endl;
    d.printRes();
}


