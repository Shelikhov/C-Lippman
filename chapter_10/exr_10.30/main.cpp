#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iterator>
#include<fstream>

using namespace std;

int main(){
    istream_iterator<int> itIn(cin), eof;
    ostream_iterator<int> itOut(cout, "\n");
    vector<int> vec(itIn, eof);
    sort(vec.begin(), vec.end());
    copy(vec.begin(), vec.end(), itOut);
}
