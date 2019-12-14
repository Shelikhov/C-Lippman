#include <iostream>
#include <string>
#include <map>

int main(){

	std::map<int, std::string> dic;
	dic.insert({1, "qwerty"});
	dic.insert({2, "asdf"});

	auto it_dic = dic.begin();
	std::cout << it_dic->first << it_dic->second << std::endl;
	return 0;
}
