#include "header.h"

int main(){
	int b = 5;
	Numbered test1(b);
	Numbered test2(test1);
	std::cout << test1.number << std::endl;
	std::cout << test2.number << std::endl;
	return 0;
}
