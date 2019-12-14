#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>

int main(){

	/*Creating map(dictionary) from file file_rules*/
	std::ifstream file_rules("file_rules");
	std::map<std::string, std::string> dictionary;
	std::string key, value;
	while (file_rules >> key && getline(file_rules, value)){
		dictionary[key] = value.substr();
	}

	/*Transforming of input file.*/
	std::ifstream file_trans("file_for_transform");
	std::string line, word;
	while (getline(file_trans, line)){
		std::stringstream record(line);
		while (record >> word){
			auto iter = dictionary.find(word);
			if (iter == dictionary.end()){
				std::cout << word << " ";
			}
			else{
				std::cout << iter->second << " ";
			}
		}
		std::cout << std::endl;
	}


	return 0;
}
