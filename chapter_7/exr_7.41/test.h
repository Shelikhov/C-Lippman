#include<iostream>
#include<string>

#ifndef TEST_H
#define TEST_H

using namespace std;

class Test{
public:
    Test(string);
    Test(int):Test("Hello"){//Test(string) is executed first, then Delegated construcor (Test(int)) is executed.
        cout << "Delegated constructor" << endl;
    }
private:
    string str;
};

#endif
