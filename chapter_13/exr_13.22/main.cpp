#include "header.h"

int main(){
	int a = 6;
	SharedPtr ptr1(a);
	std::cout << "ptr1: ";
	ptr1.print();
	SharedPtr ptr2(ptr1);
	std::cout << "ptr2: ";
	ptr2.print();

	ptr2.inc();

	std::cout << "ptr1: ";
	ptr1.print();
	std::cout << "ptr2: ";
	ptr2.print();

	NotShared val1(a);
	NotShared val2(val1);
	std::cout << std::endl << "val1: ";
	val1.print();
	std::cout << "val2: ";
	val2.print();

	val2.inc();

	std::cout << "val1: ";
	val1.print();
	std::cout << "val2: ";
	val2.print();
	return 0;
}
