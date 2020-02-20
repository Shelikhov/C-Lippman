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
    for(vector<int>::iterator it = vec.begin(); it < vec.begin() + (vec.end() - vec.begin() - 1); it += 2){  //Out put sum of neighboring numbers.
        cout << *it + *(it + 1) << " ";
    }
    if(vec.size() % 2 != 0)
        cout << *(vec.end() - 1) << "\n";

    cout << "\nResult 2:\n";
    vector<int>::iterator mid = vec.begin() + ((vec.end() - vec.begin()) / 2 - 1);//iterator of the middle of vector.
    vector<int>::iterator last = vec.end(); //iterator from the end.
    for(vector<int>::iterator it = vec.begin(); it <= mid; ++it){  //Out put sum first and last vector elements.
        cout << *it + *(--last) << " ";
    }
    if(vec.size() % 2 != 0) cout << *(mid + 1);
}
