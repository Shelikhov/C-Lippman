#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
int main(){
    vector<string> vec;
    string line, word;

    do{//Adding words to vector from cin.
        cout << "Enter words with spaces:\n";
        getline(cin, line);
        if(line.empty()) break;
        stringstream ss(line);
        while(ss >> word){
            vec.push_back(word);
        }
    }while(1);

    for(vector<string>::iterator it = vec.begin(); it != vec.end(); ++it){//Convertion to uppercase.
        for(vector<int>::size_type ind = 0; ind != it->size(); ++ind){
            (*it)[ind] = toupper((*it)[ind]);
        }
    }

    for(vector<string>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it){//Output result with max 8 words in each line.
        if((it - vec.begin()) % 8 == 0 && it != vec.begin()) cout << "\n";
        cout << *it << " ";
    }
}
