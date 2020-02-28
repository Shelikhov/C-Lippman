#include<vector>
#include <iostream>

using namespace std;

int main(){
    int i = 7, j = 7;
    double d = 2.3;
    cout << (i *= d) << endl;
    cout << (j *= static_cast<int>(d)) << endl;
}
