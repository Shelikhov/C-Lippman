#include <iostream>
#include <string>

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;//Expresion a = b returns reference type.
    std::cout << "Variable c has type int, and c will be 3.\n Result: " << c << std::endl;
    std::cout << "Variable d has type int&, then a will be 3.\n Result: " << a << std::endl;
}
