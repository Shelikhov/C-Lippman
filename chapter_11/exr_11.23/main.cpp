#include <iostream>
#include <map>
#include <string>
#include <sstream>

int main(){

	std::map<std::string, std::string> dic1; //Need to change the map to the multimap and to show result 
	std::cout << "Enter surname1, name1: ";
	std::string word, surname, name;
	getline(std::cin, word);
	std::stringstream record(word);
	record >> surname >> name;

	dic1.insert({surname, name});

	std::cout << "Enter surname2, name2: ";
	getline(std::cin, word);
	std::stringstream record2(word);
	record2 >> surname >> name;

	dic1.insert({surname, name});
	
	auto it_dic = dic1.begin();
	std::cout << it_dic->first << " " << it_dic->second << std::endl;

	it_dic = dic1.end();
	--it_dic;
	std::cout << it_dic->first << " " << it_dic->second << std::endl;
	return 0;	
}
