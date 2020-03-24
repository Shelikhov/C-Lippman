#include<iostream>
#include<fstream>
#include<map>
#include<utility>
#include<string>
#include<sstream>

using namespace std;

int main(){
    ifstream ruleFile("C:/Users/yashelik/Documents/rules.txt");//File with rules for transformation words.
    map<string, string> dictionary;

    string key, value;
    while(ruleFile >> key && getline(ruleFile, value)){
        dictionary[key] = value;
    }

    ifstream inFile("C:/Users/yashelik/Documents/file_read.txt");//File with text which need to transform.
    ofstream outFile("C:/Users/yashelik/Documents/file_write.txt");//File for result.

    string line, word;
    while(getline(inFile, line)){//To transform inFile to outFile.
        istringstream strStream(line);
        while(strStream >> word){
            map<string, string>::iterator it = dictionary.find(word);
            if(it != dictionary.end())
                outFile << it->second << " ";
            else
                outFile << word << " ";
        }
        outFile << "\n";
    }
}

