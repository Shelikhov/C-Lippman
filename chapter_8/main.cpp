#include "header.h"

int main(){

	std::vector <PhoneBook> people;
	std::string line, word;

	std::ifstream file("file_name_for_input");

	while (getline(file, line)){
		PhoneBook info;
		std::istringstream record(line);
		record >> info.name;
		while (record >> word){
			info.phones.push_back(word);
		}
		people.push_back(info);
	}

	file.close();

	std::ofstream out_file("file_name_for_output");
	for (auto &entry : people){
		out_file << entry.name;
		for (auto &num : entry.phones){
			out_file << " " << num;
		}
		out_file << std::endl;
	}
	out_file.close();

	return 0;
}
