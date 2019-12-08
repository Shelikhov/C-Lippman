#include <iostream>
#include <vector>
#include <numeric>

int main(){

	const std::vector<int> vec1 = {0,1,2,3,4,5};
	auto sum = accumulate(vec1.cbegin(), vec1.cend(), 0);
	std::cout << "Result of summ: " << sum << std::endl;
	return 0;
}
