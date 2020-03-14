#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

int main(){
    ifstream file;
    file.open("file name");

    string str, word;
    vector<string> vec;
    while(!file.eof()){//To read words from file to vector.
        getline(file, str);
        istringstream strStrm(str);
        while(strStrm >> word)
            vec.push_back(word);
    }

    for(string line : vec){//To display vector.
        cout << line << "\n";
    }
}
