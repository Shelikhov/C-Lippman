#include<iostream>
#include"dict.h"
#include<sstream>

using namespace std;

int main(){
    ifstream ruleFile("rules.txt");
    Dict obj1(ruleFile);

    ifstream inFile("file_read.txt");
    ofstream outFile("file_write.txt");

    string line, word;
    while(getline(inFile, line)){//To tramsform all words from file_read to file_write through class Dict.
        istringstream strStream(line);
        while(strStream >> word){
            outFile << obj1.transform(word) << " ";
        }
        outFile << "\n";
    }
}

