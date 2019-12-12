#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

int main(){

	std::map<std::string, std::vector<std::string>> family = {{"Petrov", {"Tom", "Anne"}}, {"Ivanov", {"Alex", "Clara"}}};
	std::string family_name;
	std::cout << "Enter family name: ";
	std::cin >> family_name;
	for (auto &w : family){
		if (w.first == family_name){
			for_each(w.second.begin(), w.second.end(), [](std::string &s){std::cout << s << std::endl;});

		}
	}
	return 0;
}
