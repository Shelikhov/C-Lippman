#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iterator>
#include<fstream>

using namespace std;

int main(){
    ifstream fileIn("File_name");
    istream_iterator<int> itIn(fileIn), eof;
    vector<int> vec(itIn, eof);

    ofstream fileOut1("File_name");
    ofstream fileOut2("File_name");
    ostream_iterator<int> itOut1(fileOut1, " "), itOut2(fileOut2, "\n");

    copy_if(vec.begin(), vec.end(), itOut2, [](int val)->bool{return (val % 2) == 0;});
    copy_if(vec.begin(), vec.end(), itOut1, [](int val)->bool{return (val % 2) != 0;});
}
