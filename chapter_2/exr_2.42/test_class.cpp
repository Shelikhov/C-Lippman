#include "test_class.h"

Test_class::Test_class(int x, int y): data1(x), data2(y){
    data3 = class2.function2(y);
}

int Test_class::function(){
    return data1 + data2 + data3;
}
