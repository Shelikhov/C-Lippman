#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(){
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec;
    list<int> lst;

    for(int i = 0; i != sizeof(arr)/sizeof(int); ++i){//To copy array elements to vector and list.
        vec.push_back(arr[i]);
        lst.insert(lst.end(), arr[i]);
    }

    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){//To delete even elements.
        if(*it % 2 == 0)
            vec.erase(it);
    }

    for(list<int>::iterator it = lst.begin(); it != lst.end(); ++it){//To delete odd elements.
        if(*it % 2 != 0)
            it = lst.erase(it);
    }

    cout << "Vector elements:\n";
    for(int el : vec)
        cout << el << "\t";

    cout << "\nList elements:\n";
    for(int el : lst)
        cout << el << "\t";
}
