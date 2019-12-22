#include "header.h"

int main(){
	std::ifstream file("path_of_file");
	std::string word, string;
	StrBlob vec1 = {"word1", "word2"};
	while(getline(file, string)){
		std::istringstream line(string);
		while(line >> word){
			vec1.push_back(word);
		}
	}

	vec1.pop_back();
	for (auto &w : vec1){
		std::cout << w << " ";
	}
	std::cout << std::endl;

	StrBlobPtr ptr(vec1);
	vec1.clear();
	for (auto &w : vec1){
		std::cout << w << " ";
	}
	std::cout << std::endl;
	ptr.check(0);
	return 0;
}

