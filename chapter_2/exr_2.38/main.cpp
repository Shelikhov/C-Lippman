#include <iostream>
#include <string>

int main(){
    int i = 3, *p = &i;
    auto a = p;
    auto b = *p;
    decltype(p) d = &i;
    decltype(*p) t = i;
    std::cout << "Variable (a) has type (int*), and will contain address.\n Result: " << a << std::endl;
    std::cout << "Variable (b) has type (int), and will be 3.\n Result: " << b << std::endl;
    std::cout << "Variable d has type (int*), and will contain address.\n Result: " << d << std::endl;
    std::cout << "Variable i has type (int), and will be 3.\n Result: " << t << std::endl;
}
