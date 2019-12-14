#include <iostream>
#include <map>
#include <string>

int main(){

	std::multimap<int, std::string> dic1;
	dic1.insert({3, "Jerk"});
	dic1.insert({2, "Tom"});
	dic1.insert({3, "John"});

	std::cout << "Count of values where key = 3: ";
	auto count = dic1.count(3);
	std::cout << count << std::endl;

	auto iter = dic1.find(2);
	std::cout << "Value of key = 2: " << iter->second << std::endl;

	std::cout << "Deleting value of key = 2." << std::endl;
	dic1.erase(2);

	auto iter2 = dic1.find(2);

	if (iter2 == dic1.end()){
		std::cout << "Value of key = 2: epmty." << std::endl; 
	}	
	return 0;
}
