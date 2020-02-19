#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
int main(){
    vector<int> vec;
    int value;
    cout << "Enter numbers with button enter:\n";
    while(cin >> value){
        vec.push_back(value);
    }

    cout << "\nResult 1:\n";
    for(vector<int>::size_type ind = 0; ind < vec.size() - 1; ind += 2){  //Out put sum of neighboring numbers.
        cout << vec[ind] + vec[ind + 1] << " ";
    }
    if(vec.size() % 2 != 0)
        cout << vec[vec.size() - 1];

    cout << "Result 2:\n";
    for(vector<int>::size_type ind = 1; ind <= vec.size() / 2; ++ind){  //Out put sum first and last vector elements.
        cout << vec[ind - 1] + vec[vec.size() - ind] << " ";
    }
    if(vec.size() % 2 != 0) cout << vec[vec.size() / 2];
}
