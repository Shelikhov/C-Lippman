#include<iostream>
#include<string>
#include"wordsize.h"
#include<fstream>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){
    ifstream file("file_name");
    size_t beg = 1, end = 5;
    size_t count = 0;
    string line, word;
    WordSize obj(beg, end);
    while(getline(file, line)){
        istringstream sstr(line);
        while(sstr >> word){
            if(obj(word))
                ++count;
        }
    }
    cout << count << "\n";
    file.close();
}
