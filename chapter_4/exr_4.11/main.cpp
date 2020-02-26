#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cout << "Enter four numbers from big to small:\n";
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d)
        cout << "success";
    else
        cout << "failure";
}
