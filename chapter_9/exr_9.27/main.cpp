#include<iostream>
#include<vector>
#include<forward_list>

using namespace std;

int main(){
    forward_list<int> flst{3, 4, 5, 6, 7, 8, 9};
    forward_list<int>::iterator prev = flst.before_begin();

    for(forward_list<int>::iterator curr = flst.begin(); curr != flst.end(); ++curr){//To delete odd elements.
        if(*curr % 2 != 0)
            flst.erase_after(prev);
        else{
            ++prev;
        }
    }

    for(int el : flst)
        cout << el << "\n";
}
