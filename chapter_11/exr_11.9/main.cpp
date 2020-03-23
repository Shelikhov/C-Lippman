#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<iterator>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
    ifstream file("file_name");
    map<string, vector<int>> wordLocation;
    int lineNum = 0;
    string str, word;

    while(!file.eof()){//To figure out which lines contain the word.
        getline(file, str);
        ++lineNum;
        istringstream strStream(str);
        while(strStream >> word){
            if(find(wordLocation[word].begin(), wordLocation[word].end(), lineNum) == wordLocation[word].end())
                wordLocation[word].push_back(lineNum);
        }
    }

    for(auto &el : wordLocation){//To show map.
        cout << el.first << "\t";
        for_each(el.second.begin(), el.second.end(), [](int val){cout << val << "\t";});
        cout << "\n";
    }
}

