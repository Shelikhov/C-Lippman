#include <iostream>
#include <algorithm>

int main(){

	int a = 6;
	auto b = [a]() mutable{
		while (a > 0){
			--a;
		}
		return a;
	};
	std::cout << a << std::endl << b() << std::endl;
	return 0;
}
