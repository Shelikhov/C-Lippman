#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>

int main(){


	std::vector<int> vec1 = {1, 2, 3, 4, 5};

	for_each(vec1.rbegin(), vec1.rend(), [](int &n){ std::cout << n << " ";});
	std::cout << std::endl;





	return 0;
}
