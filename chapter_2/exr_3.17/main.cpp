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

    for(vector<int>::size_type ind = 0; ind != vec.size(); ++ind){//Convertion to uppercase.
        for(vector<int>::size_type ind2 = 0; ind2 != vec[ind].size(); ++ind2){
            vec[ind][ind2] = toupper(vec[ind][ind2]);
        }
    }

    for(vector<int>::size_type ind = 0; ind != vec.size(); ++ind){//Output result with max 8 words in each line.
        cout << vec[ind] << " ";
        if((ind + 1) % 8 == 0) cout << "\n";
    }
}
