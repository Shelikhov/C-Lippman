#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const char cArr1[] = "first";
    const char cArr2[] = "second";
    int size = sizeof(cArr1) + sizeof(cArr2);
    char resArr[size];

    strcpy(resArr, cArr1);
    strcat(resArr, " ");
    strcat(resArr, cArr2);

    cout << "result:\t" << resArr << "\n" << "size:\t" << sizeof(resArr) << endl ;
}
