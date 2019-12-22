#include "header.h"

int main(){
	const int b = 4;
	Operator test1(b);
	Operator test2;
	test2.operator=(test1);
	std::cout << test2.data << std::endl;
	return 0;
}
