#include "header.h"

void function1(SharedVector &vec1){
	std::cout << "Adding 7 in function to vector." << std::endl;
	SharedVector vec2 = {4, 5, 6};
	vec1 = vec2;
	vec2.push_back(7);
	return;
}

void function2(std::vector<int> &vec3){
	std::cout << "Adding 7 in function to vector." << std::endl;
	std::vector<int> vec4 = {4, 5, 6};
	vec3 = vec4;
	vec4.push_back(7);
	return;
}

int main(){

	std::cout << "Vector through shared pointer:" << std::endl;
	SharedVector vec1 = {1, 3, 4};
	for (auto &w : vec1){
		std::cout << w << " ";
	}
	std::cout << std::endl;

	function1(vec1);
	std::cout << "Vector through shared pointer after functon:" << std::endl;
	for (auto &w : vec1){
		std::cout << w << " ";
	}
	std::cout << std::endl;	


	std::vector<int> vec3 = {1, 3, 4};
	std::cout << "Usual vector:" << std::endl;
	for(auto &w : vec3){
		std::cout << w << " ";
	}
	std::cout << std::endl;

	function2(vec3);
	std::cout << "Usual vector after functon:" << std::endl;
	for(auto &w : vec3){
		std::cout << w << " ";
	}
	std::cout << std::endl;
	return 0;
}
