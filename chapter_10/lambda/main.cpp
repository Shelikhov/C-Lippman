#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){

	std::vector<std::string> vec1 = {"qwert", "qwe", "qw", "qwerty", "q"};
	int sz = 3;

	/*To output Vector Array*/
	std::cout << "Originally array of words: ";
	for (const auto &s : vec1){
		std::cout << s << " ";
	}
	std::cout << std::endl;

	/*To sort Vector Array with LAMBDA expresion*/
	stable_sort(vec1.begin(), vec1.end(), [](const std::string &s1, const std::string &s2){
							return s1.size() < s2.size();});
	
	/*To find first element into Vector Array*/
	auto firstEl = find_if(vec1.begin(), vec1.end(), [sz](const std::string &s){
								return s.size() >= sz;});

	/*To output result*/
	std::cout << "Words with size more then 3 letters: ";
	for_each(firstEl, vec1.end(), [](const std::string &s){
						std::cout << s << " ";});
	std::cout << std::endl;
	return 0;
}
