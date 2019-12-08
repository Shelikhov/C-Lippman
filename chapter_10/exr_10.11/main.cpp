#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isShorter(const std::string &s1, const std::string &s2){
	return s1.size() < s2.size();
}

int main(){

	std::cout << "Originally: ";
	std::vector<std::string> vec1 = {"qwer", "qwert", "qw", "awsd"};
	for (const auto &s : vec1){
		std::cout << s << " ";
	}
	std::cout << std::endl;
	std::cout << "Sorted by size: ";
	sort(vec1.begin(), vec1.end(), isShorter);
	for (const auto &s : vec1){
		std::cout << s << " ";
	}
	return 0;
}
	
