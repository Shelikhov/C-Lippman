#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

int main(){

	const std::vector<int> vec1 = {1,2,0,1,2,3};
	int val = 1;
	auto res_find = find(vec1.cbegin(), vec1.cend(), val);
	std::cout << val << (res_find == vec1.cend() ? " not exists in array(vector)!" : " exists in array(vector)!") << std::endl;
	auto res_count = count(vec1.cbegin(), vec1.cend(), val);
	std::cout << val << " repeats " << res_count << " times!" << std::endl;

	const std::list<int> list1 = {0,1,2,8,9};
	auto res_find_list = find(list1.cbegin(), list1.cend(), val);
	std::cout << val << (res_find_list == list1.cend() ? " not exists in list!" : " exists in list!") << std::endl;
	return 0;
}
