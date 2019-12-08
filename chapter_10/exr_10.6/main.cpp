#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){

	std::vector<int> vec1 = {2,3,5,6};
	for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++){
		std::cout << *it << " ";
	}

	std::cout << std::endl;
	fill_n(vec1.begin(), vec1.size(), 7);
	for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++){
		std::cout << *it << " ";
	}

	return 0;
}
