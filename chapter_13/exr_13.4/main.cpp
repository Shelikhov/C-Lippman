#include "header.h"

int main(){
	const int b = 3;
	Class1 test1(b);
	Class1 test2(test1);
	std::cout << test1.data << std::endl;
	std::cout << test2.data << std::endl;
	return 0;
}
