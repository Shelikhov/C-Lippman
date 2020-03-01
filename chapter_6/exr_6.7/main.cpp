#include <iostream>
using namespace std;

int fun();

int main(){
    for(int i = 0; i < 5; ++i){
        cout << fun() << endl;
    }
}

int fun(){
    static int val = 0;//Static variable created before definition.
    return ++val;
}
