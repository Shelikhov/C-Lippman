#include <iostream>
#include <string>
#include "test_class.h"
#include "test_class2.h"

int main(){
    int i = 3;
    Test_class exmp(5, i);
    int a = exmp.function();
    Test_class2 test;
    int b = test.function2(i);
    std::cout << "Result: " << a << std::endl;
    std::cout << "Result: " << b << std::endl;
}
