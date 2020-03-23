#include<iostream>
#include<vector>
#include<utility>
#include<fstream>
#include<sstream>
#include<map>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
    ifstream file("file_name");
    multimap<string, string> authors;

    int numLine = 0;
    string line, author, book;

    while(!file.eof()){
        getline(file, line);
        istringstream strStream(line);
        strStream >> author;
        strStream >> book;
        authors.insert({author, book});
    }

    for(const pair<string, string> &el : authors)
        cout << el.first << "\t" << el.second << "\n";

    vector<string> vecKeys;
    for(const pair<string, string> &el : authors){
        vecKeys.push_back(el.first);
    }

    sort(vecKeys.begin(), vecKeys.end());


    cout << endl;
    for(string &str : vecKeys){
        map<string, string>::iterator it = authors.find(str);
        cout << "Author:\t" << it->first << "\tbook:\t" << it->second << "\n";
    }
}

