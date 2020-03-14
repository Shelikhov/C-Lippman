#include<iostream>
#include<vector>

using namespace std;

vector<int>::iterator fun(vector<int>::iterator, vector<int>::iterator, int &);

int main(){
	cout << "Enter number:\n";
	int num;
	cin >> num;

	vector<int> vec {3,45, 9, 4, 2};
	vector<int>::iterator itBeg = vec.begin();
	vector<int>::iterator itEnd = vec.end();
	vector<int>::iterator it = fun(itBeg, itEnd, num);

	if(fun(itBeg, itEnd, num))
		cout << "Element exists in vector.\n";
	else
		cout << "Element doesn't exists in vector.\n";
}

bool fun(vector<int>::iterator itBeg, vector<int>::iterator itEnd, int &val){
	while(itBeg != itEnd){
		if(*itBeg == val)
			return true;
		++itBeg;
	}
	return false;
}
