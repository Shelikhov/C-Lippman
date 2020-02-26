#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter number:\n";
    cin >> num;
    while(num != 42){
        cout << "Enter number:\n";
        cin >> num;
    }
    cout << "End!";
}
