#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const char carr1[] = "";
    const char carr2[] = "";

    int result = strcmp(carr1, carr2);
    if(result > 0) cout << "second char array less than first\n";
    else if(result < 0) cout << "first char array less than second\n";
    else    cout << "char arrays are equal\n";
}
