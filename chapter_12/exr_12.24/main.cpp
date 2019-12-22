#include <iostream>
#include <string>

/*Creating dynamic array.*/
int main(){
	std::string str;
	getline(std::cin, str);
	char *ptr = new char[str.size()];
	for (int i = 0; i < str.size(); ++i){
		*(ptr + i) = str[i];
	}
	for(int i = 0; i < str.size(); ++i){
		std::cout << *(ptr + i) << std::endl;
	}
	delete [] ptr;
	ptr = NULL;
	return 0;
}
