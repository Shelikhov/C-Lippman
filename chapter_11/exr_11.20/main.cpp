#include<iostream>
#include<vector>
#include<utility>
#include<fstream>
#include<sstream>
#include<map>
#include<iterator>

using namespace std;

int main(){
    ifstream file("file_name");
    istream_iterator<string> it(file), eof;

    map<string, size_t> wordCount;//To read all words from file to map. And figure ut how much each word repeated.
    pair<map<string, size_t>::iterator, bool> retVal;//Return value after insert function.
    while(it != eof){
        retVal = wordCount.insert({*it, 1});
        if(!retVal.second)
            ++retVal.first->second;
        ++it;
    }

    for(const pair<string, size_t> &el : wordCount)//To show map.
        cout << "key value:\t" << el.first << "\tmapped value:\t" << el.second << "\n";
}

