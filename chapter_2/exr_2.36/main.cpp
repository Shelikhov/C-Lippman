#include <iostream>
#include <string>

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;
    std::cout << "Variable c has type int, and c will be 4.\n Result: " << c << std::endl;
    std::cout << "Variable d has type int&, then a will be 4.\n Result: " << a << std::endl;
}
