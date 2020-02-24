#include <iostream>
#include <vector>

using namespace std;

int main(){
    int size1, size2;
    cout << "Enter first vector size\n";
    cin >> size1;
    cout << "Enter second vector size\n";
    cin >> size2;

    vector<int> vec1, vec2;
    int value = 0;
    while(value < size1 || value < size2){
       if(value < size1)
           vec1.push_back(value);
       if(value < size2)
           vec2.push_back(value);
       ++value;
    }

    vector<int>::iterator it1 = vec1.begin(), it2 = vec2.begin();
    while(it1 < vec1.end() || it2 < vec2.end()){
        if(*it1 < *it2){
            cout << "first vector less than second\n";
            return 0;
        }
        else if(*it1 > *it2){
            cout << "second vector less than first\n";
            return 0;
        }
        ++it1;
        ++it2;
    }

    if(size1 < size2) cout << "first vector less than second\n";
    else if(size1 > size2) cout << "first vector bigger than second\n";
    else cout << "vectors are equal\n";
}
