#include<iostream>
#include<algorithm>
#include<vector>
//#include<string>

using namespace std;

void shorterTwo(vector<string> &);

int main(){
    vector<string> vec{"sad", "wd", "wd", "sad", "sdwqw", "a", "sd", "a"};
    shorterTwo(vec);
}

void shorterTwo(vector<string> &vec){
    sort(vec.begin(), vec.end());//Sorts in alphabetical order.
    vector<string>::iterator it = unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());//To delete not unique elements.
    stable_sort(vec.begin(), vec.end(), [](const string &str1, const string &str2){return str1.size() < str2.size();});
    partition(vec.begin(), vec.end(), [](string &str){return str.size() < 3;});
    for_each(vec.begin(), vec.end(), [](string &str){cout << str << "\t";});
    return;
}
