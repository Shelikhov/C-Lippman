#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string str("ab2c3d7R4E6"), toSearch("0123456789"), numbers, letters;

    string::size_type pos = 0;
    while((pos = str.find_first_of(toSearch, pos)) != string::npos){
        numbers.append(1, str[pos]);
        ++pos;
    }

    pos = 0;
    while((pos = str.find_first_not_of(toSearch, pos)) != string::npos){
        letters.append(1, str[pos]);
        ++pos;
    }
    cout << "Numbers:\t" << numbers << endl;
    cout << "Letters:\t" << letters << endl;
}


