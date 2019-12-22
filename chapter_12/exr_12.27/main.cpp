#include "header.h"

int main(){
	std::ifstream file("/home/money/gitHub/C-Lippman/chapter_12/exr_12.27/file");
	TextQuery tq(file);
	while(true){
		std::cout << "Enter word you are looking for: ";
		std::string word;
		if (!(std::cin >> word) || (word == "q")){
			break;
		}
		print(tq.query(word));
		std::cout << std::endl;
	}
	return 0;
}
