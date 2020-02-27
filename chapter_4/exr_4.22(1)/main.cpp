#include<vector>
#include <iostream>

using namespace std;

int main(){
    cout << "Enter your mark:\n";
    int grade;
    cin >> grade;
    cout << "Result:\n" << ((grade > 75) ? "Your level is excelent." : ((grade < 60) ? "Your level is very low." : "Your level is average."));
}
