#include <iostream>
#include <string>
#include <utility>
#include <vector>

std::pair<std::string, int> process(std::vector<std::string> &v){
	return {v.front(), v.front().size()};
}

int main(){

	std::string input;
	std::vector<std::string> vec1;
	std::cin >> input;
	vec1.push_back(input);
	auto test = process(vec1);	
	std::cout << test.first << " " << test.second << std::endl;
	return 0;
}
