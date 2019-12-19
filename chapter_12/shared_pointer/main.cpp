#include <iostream>
#include <memory>

int main(){
	std::shared_ptr<int> ptr(new int(34));
	std::cout << ptr <<std::endl;

	int a = 23;
	ptr.reset(new int(a));
	std::cout << ptr << std::endl;
	return 0;
}
