#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main(){
    ifstream file;
    file.open("C:/Users/yashelik/Documents/file_read.txt");

    string str;
    vector<string> vec;
    while(!file.eof()){//To read strings of file to vector.
        getline(file, str);
        vec.push_back(str);
    }

    for(string line : vec){//To display vector.
        cout << line << "\n";
    }
}
