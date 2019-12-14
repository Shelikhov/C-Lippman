#include <iostream>
#include <set>

bool compare(int a, int b){
	return (a>b ? a : b);
}

int main(){

	std::multiset<int, decltype(compare)*> numbers = {4, 2, 5, 1};
	numbers.insert(3);
	for (auto i : numbers){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}
