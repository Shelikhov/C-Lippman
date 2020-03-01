#include <iostream>
using namespace std;

int fun(int val);

int main(){
    char ch;

    do{
    cout << "Enter number:\n";
    int val;
    cin >> val;
    cout << "Result of factorial:\t" << fun(val) << "\n" << "Do you want to continue (y or n)?\n";
    cin >> ch;
    }while(ch != 'n');
}

int fun(int val){
    int result = 1;
    while(val > 1){
        result *= val;
        --val;
    }
    return result;
}
