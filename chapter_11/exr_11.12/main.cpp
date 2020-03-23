#include<iostream>
#include<vector>
#include<utility>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
    string line, word, num;
    vector<pair<string, int>> vec;
    ifstream file("file_name");
	
    while(!file.eof()){//To read data from file to vector as pair elements.
        getline(file, line);
        istringstream strStream(line);
        strStream >> word >> num;
        int n = stoi(num);
        vec.push_back(make_pair(word, n));
    }

    for(pair<string, int> &el : vec)//To show vector.
        cout << el.first << "****" << el.second << endl;
}

