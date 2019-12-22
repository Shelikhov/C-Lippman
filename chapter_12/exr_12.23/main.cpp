#include <iostream>
#include <string>

/*Creating dynamic array*/
int main(){
	std::string str1 = "qwert", str2 = "asdf";
	str2 += str1;

	char *ptr = new char[str2.size()];
	for (int i = 0; i < str2.size(); ++i){
		*(ptr + i) = str2[i];
	}
	for (int i = 0; i < str2.size(); ++i){
		std::cout << *(ptr + i) << std::endl;
	}
	delete [] ptr;
	ptr = NULL;	
	if(ptr){
		std::cout << "The array exists." << std::endl;
	}else{
		std::cout << "Deleting array." << std::endl;
	}
	return 0;
}
