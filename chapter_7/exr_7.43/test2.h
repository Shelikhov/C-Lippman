#include<test.h>

#ifndef TEST2_H
#define TEST2_H

using namespace std;

class Test2{
public:
    Test2(int);//Default constructor of the Test2 class which initializes default constructor of the Test1 class.
private:
    Test1 t1;//Default constructor Test1(int)
};

#endif
