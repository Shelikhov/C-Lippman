#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
        vector<string> vec;
        string word;
        while(getline(cin, word)){
                vec.push_back(word);
        }
        cout << vec[0];
        return 0;
}
