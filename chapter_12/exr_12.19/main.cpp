#include "header.h"

int main(){
	StrBlob vec1 = {"sdfda", "rew"};
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

