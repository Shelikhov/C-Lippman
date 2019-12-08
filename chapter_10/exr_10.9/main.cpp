#include <iostream>
#include <vector>
#include <algorithm>

int main(){

	std::vector<int> vec1 = {4,6,3,4,6,2,1,4};
	std::cout << "Originally: ";
	for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	sort(vec1.begin(), vec1.end());
	std::cout << "After sort: ";
	for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++){
		std::cout << *it << " ";
	}
	
	std::cout << std::endl;
	auto iter = unique(vec1.begin(), vec1.end());	
	std::cout << "After unique: ";
	for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++){
		std::cout << *it << " ";
	}

	std::cout << std::endl;
	vec1.erase(iter, vec1.end());	
	std::cout << "After erase: ";
	for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return 0;
}
