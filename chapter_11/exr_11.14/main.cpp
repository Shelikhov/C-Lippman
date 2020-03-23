#include<iostream>
#include<vector>
#include<utility>
#include<fstream>
#include<sstream>
#include<map>

using namespace std;

int main(){
    map<string, vector<pair<string, string>>> family;
    string line;
    string familyName, childName, childBirth;
    ifstream file("file_read.txt");
    
    while(!file.eof()){//To read all families from file to map.
        getline(file, line);
        istringstream strStream(line);
        strStream >> familyName;
        while(strStream >> childName >> childBirth){
            family[familyName].push_back(make_pair(childName, childBirth));
        }
    }

    for(const pair<string, vector<pair<string, string>>> &el : family){//To output all families.
        cout << "Family name:\t" << el.first << "\n";
        cout << "Children:\n\t";
        for(const pair<string, string> &child : el.second){
            cout << "Name of child:\t" << child.first << "\t" << "Date of birth:\t" << child.second << "\n\t";
        }
        cout << "\n";
    }
}

