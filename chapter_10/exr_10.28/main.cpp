#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

int main(){

	std::vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::list<int> lst1, lst2, lst3;

	copy(vec1.begin(), vec1.end(), front_inserter(lst1));
	copy(vec1.begin(), vec1.end(), back_inserter(lst2));
	copy(vec1.begin(), vec1.end(), inserter(lst3, lst3.begin()));

	std::cout << "Front_inserter: ";
	for_each(lst1.begin(), lst1.end(), [](int a){ std::cout << a << " ";});
	std::cout << std::endl;
	std::cout << "Back_inserter: ";
	for_each(lst2.begin(), lst2.end(), [](int a){ std::cout << a << " ";});
	std::cout << std::endl;
	std::cout << "Inserter: ";
	for_each(lst3.begin(), lst3.end(), [](int a){ std::cout << a << " ";});
	std::cout << std::endl;
	return 0;
}
