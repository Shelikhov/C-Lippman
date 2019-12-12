#include <iostream>
#include <map>
#include <string>
#include <set>

int main(){

	std::map<std::string, size_t> word_count;
	std::string word;

	std::set<std::string> exclude = {"the", "a"};;
	/*while (std::cin >> word){
		++word_count[word];
	}*/
	std::cin >> word;
	if (exclude.find(word) == exclude.end()){
		++word_count[word];
	}
	std::cin >> word;
	if (exclude.find(word) == exclude.end()){
		++word_count[word];
	}
	for (auto &w : word_count){
		std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times." : " time") << std::endl;
	}
	return 0;
}
