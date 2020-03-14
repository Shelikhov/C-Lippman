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

	if(it == itEnd)
		cout << "Element doesn't exists in vector.\n";
	else
		cout << "Element exists in vector.\n";
}

vector<int>::iterator fun(vector<int>::iterator itBeg, vector<int>::iterator itEnd, int &val){
	while(itBeg != itEnd){
		if(*itBeg == val)
			return itBeg;
		++itBeg;
	}
	return itEnd;
}
