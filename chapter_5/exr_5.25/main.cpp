#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, j;//If variables will be declared in scope TRY, then they won't be available in scope CATCH.
    cout << "Enter numerator:\n";
    cin >> i;
    cout << "Enter denominator:\n";
    cin >> j;

    try{
    if(j == 0)
        throw runtime_error("Error: The denominator equal zero!\n");
    cout << "Result:\t" << static_cast<double>(i)/j << endl;
    }catch (runtime_error err) {
        cout << err.what() << endl;
        cout << "Do you want to try again? (y or n)\n";
        char ch;
        cin >> ch;
        if(ch == 'n')
            return 0;
        cout << "Enter denominator:\n";
        cin >> j;
        cout << "Result:\t" << static_cast<double>(i)/j << endl;
    }
}
