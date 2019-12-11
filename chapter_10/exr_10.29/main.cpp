#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <fstream>

int main(){

	std::string name = "file_name";

	std::ifstream file(name);

	std::istream_iterator<std::string> in(file), eof;

	std::vector<std::string> vec1;

	copy(in, eof, back_inserter(vec1));

	std::ostream_iterator<std::string> out(std::cout, " ");

	for ( auto word : vec1){
		out = word;
	}
	std::cout << std::endl;
	
	return 0;
}
