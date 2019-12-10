#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std::placeholders;

/*To check size of string (s).*/
bool check_size(std::string &s, int a){
	return s.size() >= a;
}

int main(){

	std::vector<std::string> vec1 = {"qw", " we", "qwe", "qwer", "qwerty", "qwertyu"};

/*To find words which have more then (a) letters.*/
	auto it = find_if(vec1.begin(), vec1.end(), bind(check_size, _1, 4));

	for_each(it, vec1.end(), [](std::string &s){ std::cout << s << " ";});

	std::cout << std::endl;
	return 0;
}
