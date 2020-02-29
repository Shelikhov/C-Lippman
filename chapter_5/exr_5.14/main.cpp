#include<string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string sentence, word;
    vector<string> vecStr1, vecStr2;
    int cnt = 1;
    vector<string>::iterator it;

//To get text.
    cout << "Enter text:\n";
    getline(cin, sentence);
    stringstream ss(sentence);
    while(ss >> word){
        it = vecStr1.begin();
        while(it != vecStr1.end()){
            if(word == *it)
                break;
            ++it;
        }
        if(it == vecStr1.end())
            vecStr2.push_back(word);
        vecStr1.push_back(word);
    }

//To find max repeated words.
    it = vecStr2.begin();
    string outputWord;
    while(it != vecStr2.end()){
        vector<string>::iterator it2 = vecStr1.begin();
        int temp = 0;
        while(it2 != vecStr1.end()){
            if(*it == *it2)
                temp++;
            ++it2;
        }
        if(temp > cnt){
            cnt = temp;
            outputWord = *it;
        }
        ++it;
    }
    if(cnt > 1)
        cout << "Result: " << outputWord << " " << cnt;
    else
        cout << "Result: no repeated words.";
}
