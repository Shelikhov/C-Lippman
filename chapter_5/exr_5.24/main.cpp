#include <iostream>
#include <string>
using namespace std;

int main(){
    try{
    int i, j;
    cout << "Enter numerator:\n";
    cin >> i;
    cout << "Enter denominator:\n";
    cin >> j;
    if(j == 0)
        throw runtime_error("Error: The denominator equal zero!\n");
    cout << "Result:\t" << static_cast<double>(i)/j << endl;
    }catch (runtime_error err) {
        cout << err.what() << endl;
    }
}
