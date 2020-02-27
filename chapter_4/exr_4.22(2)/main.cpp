#include<vector>
#include <iostream>

using namespace std;

int main(){
    cout << "Enter your mark:\n";
    int grade;
    cin >> grade;
    cout << "Result:\n";
    if(grade > 75)
        cout << "Your level is excelent.";
    else if(grade < 60)
        cout << "Your level is very low.";
    else
        cout << "Your level is average.";
}
