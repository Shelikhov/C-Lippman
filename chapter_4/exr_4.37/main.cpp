#include<vector>
#include <iostream>

using namespace std;

int main(){
    //To cast type (const string*) to type (void*).
    const string str = "test";
    const string *p = &str;
    void *v;
    string *temp = const_cast<string*>(p);
    v = static_cast<void*>(temp);

    //To cast type char to type int.
    cout << "Enter symbol:\n";
    int i;
    char c;
    cin >> c;
    char *pc = &c;
    i = static_cast<int>(*pc);
    cout << "Result (ASCI): " << i << endl;

    //To cast type (void*) to type (double*).
    double d = 8.3;
    void *pv = &d;
    double *pd = static_cast<double*>(pv);
    cout << *pd;

    //To cast type (void*) to type (char*).
    pc = static_cast<char*>(pv);
    cout << *pc;
}
