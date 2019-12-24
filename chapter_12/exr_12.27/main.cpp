#include "header.h"

int main(){
	std::ifstream file("file_name");
	TextQuery tq(file);
	while(true){
		std::cout << "Enter word you are looking for or \"q\" to exit: ";
		std::string word;
		std::cin >> word;
		if(word == "q"){
			break;
		}
		tq.search(word);
	}
	return 0;
}
