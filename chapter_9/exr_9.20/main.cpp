#include<iostream>
#include<list>
#include<deque>
#include<string>

using namespace std;

int main(){
    list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> odd, even;

    for(list<int>::iterator it = lst.begin(); it != lst.end(); ++it){//To split all list into two deques.
        if((*it % 2) != 0)
            odd.insert(odd.end(), *it);
        else
            even.push_back(*it);
    }

    cout << "All list elements:\n";
    for(int el : lst)
        cout << el << "\t";

    cout << "\nOdd elements:\n";
    for(int el : odd)
        cout << el << "\t";

    cout << "\nEven elements:\n";
    for(int el : even)
        cout << el << "\t";
}
