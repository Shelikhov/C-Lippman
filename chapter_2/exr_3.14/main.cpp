#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<int> vec;
	int value;
	while(cin >> value){
		vec.push_back(value);
	}
	cout << vec[0];
	return 0;
}
